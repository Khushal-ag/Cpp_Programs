#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
		{
			if (i % 2 == 0)
			{
				if (i % 4 == 0 && j == 1) cout << "#";
				else if (i % 2 == 0 && j == m && i % 4 != 0) cout << "#";
				else cout << ".";
			}
			else cout << "#";
		}
		cout << endl;
	}

	return 0;
}