#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	long long int n;
	cin >> n;
	long long int s = 0;
	for (long long int i = 1; i <= n; ++i)
	{
		if (i % 2 == 1) s -= i;
		else s += i;
	}
	cout << s;
	return 0;
}