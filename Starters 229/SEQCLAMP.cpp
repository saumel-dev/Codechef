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
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            ans = p[i].second;
            continue;
        }
        if(ans >= p[i].first && ans <= p[i].second) continue;
        else
        {
            if(ans < p[i].first) ans = p[i].first;
            else ans = p[i].second;
        }
    }
    cout << ans << endl;

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