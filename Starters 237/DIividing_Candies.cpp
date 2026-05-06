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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    vector<int> ans;
    ans.push_back(0);
    for(int i = 0; i < n; i++)
    {
        if(v[i] % x == 0) ans.push_back(v[i]);
    }
    sort(ans.begin(), ans.end());
    cout << *max_element(ans.begin(), ans.end()) << endl;
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