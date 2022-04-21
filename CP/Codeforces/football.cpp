#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	string s;
	cin >> s;
	int c = 0, z = 0, o = 0;
	for (auto i : s)
	{
		if (i == '0') {
			o = 0;
			z++;
		}
		else {
			z = 0;
			o++;
		}
		c = max(z, o);
		if (c >= 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}