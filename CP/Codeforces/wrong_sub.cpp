#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	while (k--)
	{
		if (n % 10 == 0) n /= 10;
		else n--;
	}
	cout << n;
	return 0;
}