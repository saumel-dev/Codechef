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
    int n, k, cost = 0; cin >> n >> k;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    string s; cin >> s;
    vector<pair<char, int>> p;
    for(int i = 0; i < s.size(); i++)
    {
        p.push_back({s[i], v[i]});
    }
    sort(p.begin(), p.end());
    for(auto u : p)
    {
        if(u.first == '0')
        {
            cost += u.second;
            k--;
        }
        if(k == 0) break;
    }
    if(k != 0) cout << -1 << endl;
    else cout << cost << endl;
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