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
	int n, k; cin >> n >> k;
	vector<int> v;
	for(int i = 0; i < n; i++)
	{
	    int a; cin >> a;
	    if(a > 5) v.push_back(a);
	}
	sort(v.rbegin(), v.rend());
    // for(auto u : v) cout << u << " ";
    // nl;
	int profit = 0;
	for(int i = 0; i < min((int)v.size(), k); i++)
	{
	    profit += (v[i] - 5);
	}
    for(int i = k; i < v.size(); i++)
    {
        if(v[i] >= 10)
        {
            profit += v[i] - 10;
        }
    }
	cout << profit << endl;
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