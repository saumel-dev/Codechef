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
    int n;
    cin >> n;
    if(n == 1) {cout << 1 << endl;  return;}
    if(n == 2 || n == 5) {cout << 0 << endl; return;}
    int temp = n;
    if(temp % 2 == 0 && temp % 5 == 0) {cout << 2 << endl; return;}
    if(temp % 2 != 0 && temp % 5 != 0) {cout << 1 << endl; return;}
    cout << 0 << endl;
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