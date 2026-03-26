#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define mem(a,b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl


void solve()
{
    int n, k,teste = 0; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for(auto &u : a) cin >> u;
    for(auto &u : b) cin >> u;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int mx = max(a[i], a[j]);
            int mn = min(a[i], a[j]);
            if(mx - 100 < 0 || mx - 100 < 100) mx /= 2;
            else mx -= 100;
            int spend = mx + mn;
            // cout << a[i] << " " << a[j] << endl;
            if(spend > k) continue;
            else
            {
                if(b[i] + b[j] > teste)
                {
                    teste = b[i] + b[j];
                    // cout << teste << endl;
                }
            }
        }
    }
    cout << teste << endl;
// 110
// 105
// 140
// 80
// 170
// 110
// 64
}
int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}