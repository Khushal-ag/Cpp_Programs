#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	int res = (240 - k) / 5;
	int c = 0;
	int i = 1, s = 0;
	while (s <= res)
	{
		if (c > n) break;
		s += i;
		i++;
		c++;
	}
	cout << c - 1;
	return 0;
}