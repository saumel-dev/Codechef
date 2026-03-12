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
    int n; cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<pair<ll, ll>> p;
    for(int i = 0; i < n; i++)
    {
        p.push_back({v[i], i+1});
    }
    sort(p.rbegin(), p.rend());
    bool founded = false;
    vector<ll> ans;
    for(int i = 0; i < n - 2; i++)
    {
        // cout << p[i].first << " " << p[i].second << endl;
        if(p[i].first + p[i + 1].first != p[i + 2].first)
        {
            ans.push_back(p[i].second);
            ans.push_back(p[i + 1].second);
            ans.push_back(p[i + 2].second);
            founded = true;
            break;
        }
        // cout << p[i].first + p[i + 1].first << endl;
    }
    if(!founded) cout << -1 << endl;
    else 
    {
        for(auto u : ans) cout << u << " ";
        nl;
    }

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