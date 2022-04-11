#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	double s = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		s += x;
	}
	cout << setprecision(14) << s / n;

	return 0;
}