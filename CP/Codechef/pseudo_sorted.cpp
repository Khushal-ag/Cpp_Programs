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
		int n;
		cin >> n;
		vector<int> v1, v2;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin >> x;
			v1.pb(x);
			v2.pb(x);
		}
		int c = 0;
		sort(v2.begin(), v2.end());
		for (int i = 1; i < v1.size() - 1; ++i)
		{
			if (v1[i] > v1[i + 1]) {
				swap(v1[i], v1[i + 1]);
				c++;
			}
		}
		if (v1 == v2 && c <= 1) cout << "YES\n";
		else cout << "NO\n";

	}

	return 0;
}