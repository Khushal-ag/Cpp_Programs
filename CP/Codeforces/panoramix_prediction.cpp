#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n, m;
	cin >> n >> m;
	int temp;
	while (1)
	{
		int f = 0;
		int i = ++n;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0) {
				f = 1;
				break;
			}
		}
		if (f == 0) {
			temp = i;
			break;
		}
	}
	if (temp == m) cout << "YES";
	else cout << "NO";

	return 0;
}