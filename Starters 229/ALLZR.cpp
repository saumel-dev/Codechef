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
    int a, b, c;
    cin >> a >> b >> c;
    if(c % 3 != 0) {no; return;}
    b -= c / 3;
    if(b % 2 != 0) {no; return;}
    a -= b / 2;
    if(a != 0) {no; return;}
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