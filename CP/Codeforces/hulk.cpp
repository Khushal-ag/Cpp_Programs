#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 == 0) cout << "I love ";
		else cout << "I hate ";
		if (i == n) cout << "it";
		else cout << "that ";
	}

	return 0;
}