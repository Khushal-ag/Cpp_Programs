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
		int a, b;
		cin >> a >> b;
		a = a * 10;
		b = b * 5;
		if (b > a) cout << "SECOND\n";
		else if (a > b) cout << "FIRST\n";
		else cout << "ANY\n";

	}

	return 0;
}