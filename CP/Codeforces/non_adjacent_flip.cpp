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
		string s;
		cin >> s;
		int f = 0, z = 0;
		for (auto i : s)
		{
			if (i == '1') {
				z = 1;
				break;
			}
		}
		if (z == 0) {
			cout << "0" << endl;
			continue;
		}

		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] == s[i + 1] && s[i] == '1') {
				f = 1;
				break;
			}
		}
		if (f == 1) cout << "2" << endl;
		else cout << "1" << endl;

	}

	return 0;
}