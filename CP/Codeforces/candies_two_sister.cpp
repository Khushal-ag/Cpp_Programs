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
		if (n > 2)
			cout << ceil(n / 2.0) - 1 << endl;
		else cout << "0" << endl;
	}

	return 0;
}