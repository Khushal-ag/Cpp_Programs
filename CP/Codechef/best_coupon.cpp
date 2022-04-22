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
		int n;
		cin >> n;
		cout << max(n / 10, 100) << endl;
	}

	return 0;
}