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
		int temp = 0;
		int c = 0;
		while (1) {
			temp += x;
			if (temp < y) c++;
			else break;
		}
		cout << c << endl;
	}

	return 0;
}