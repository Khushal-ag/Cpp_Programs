#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n;
	cin >> n;
	char c;
	int a = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> c;
		if (c == 'A') a++;
	}
	if (a > n - a) cout << "Anton";
	else if (n - a > a) cout << "Danik";
	else cout << "Friendship";

	return 0;
}
