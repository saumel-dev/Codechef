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
#define mem(a, b) memset(a, b, sizeof(a))
#define check cout << "-__________________-" << endl

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    int failed = 0, mx = 0;
    for(auto u : m)
    {
        if(u.second >= 2)
        {
            failed++;
            mx = u.first;
        }
        
    }
    if(failed > 1) {no; return;}
    if(failed == 0) {yes; return;}
    sort(v.begin(), v.end());
    if(mx != v[n - 1]) no;
    else yes;
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