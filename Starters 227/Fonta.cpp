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
    string s;
    cin >> s;
    if(s[2] == 'n' && s[3] == 't' && s[4] == 'a') yes;
    else no;
}
int main()
{
    optimize();

    int t = 1; 
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}