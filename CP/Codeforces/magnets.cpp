#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	string s = "", n;
	int g = 0;
	while (t--)
	{
		cin >> n;
		if (s != n) {
			g++;
			s = n;
		}
	}
	cout << g;

	return 0;
}