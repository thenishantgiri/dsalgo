#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back
#define bug(...)		__f (#__VA_ARGS__, __VA_ARGS__)
using namespace std;

inline int power(int a, int b)
{
	int X = 1;
	while (b)
	{
		if (b & 1) X *= a;
		a *= a;
		b >>= 1;
	}
	return X;
}

// Debugging Template

// template <typename Arg1>
// void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
// template <typename Arg1, typename... Args>
// void __f (const char* names, Arg1&& arg1, Args&&... args)
// {
// 	const char* comma = strchr (names + 1, ",");
// 	cout.write(names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
// }

const int N = 200005;

void solve() {
	int n;
	cin >> n;
	cout << n << endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	clock_t z = clock();

	int t = 1;
	// cin >> t;
	while (t--) solve();
	
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}