#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	int k;
	cin >> k;
	int c = 0;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		if (x > k) c++;
	}
	cout << c;
	return 0;
}