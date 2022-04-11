#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	int f = 0;
	while (t--)
	{
		int n;
		cin >> n;
		if (n == 1) f = 1;
	}
	if (f == 1) cout << "HARD";
	else cout << "EASY";
	return 0;
}