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
		if (n >= 1900) cout << "Division 1\n";
		else if (n >= 1600) cout << "Division 2\n";
		else if (n >= 1400) cout << "Division 3\n";
		else cout << "Division 4\n";
	}

	return 0;
}