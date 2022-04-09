#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	int count = 0;
	while (n--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int sum = a + b + c;
		if (sum >= 2) count++;
	}
	cout << count;

	return 0;
}