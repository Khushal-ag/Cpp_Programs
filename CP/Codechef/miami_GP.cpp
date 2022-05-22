#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--)
	{
		int x, y;
		cin >> x >> y;
		if (1.07 * x >= y) cout << "YES\n";
		else cout << "NO\n";

	}

	return 0;
}