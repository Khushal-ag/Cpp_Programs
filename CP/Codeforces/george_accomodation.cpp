#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	int c = 0;
	while (t--)
	{
		int p, q;
		cin >> p >> q;
		if (q > p && q - p >= 2) c++;
	}
	cout << c;

	return 0;
}