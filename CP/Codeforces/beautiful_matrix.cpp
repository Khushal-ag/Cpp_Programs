#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int a[5][5];
	int x, y;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> a[i][j];
			if (a[i][j] == 1) {
				x = i + 1;
				y = j + 1;
			}
		}
	}
	cout << abs(x - 3) + abs(y - 3);
	return 0;
}