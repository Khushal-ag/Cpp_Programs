#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n, t;
	cin >> n, t;
	string s;
	cin >> s;
	string res = "";
	while (t--)
	{
		for (int i = 0; i < s.size() - 1; ++i)
		{
			if (s[i] == 'B' && s[i + 1] == 'G') {
				res.push_back('G');
				res.push_back('B');
				i++;
			}
			else res += (s[i]);
		}
		if (res == s) break;
	}
	cout << res;
	return 0;
}