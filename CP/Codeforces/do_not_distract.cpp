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
		int f = 0;
		string s;
		cin >> s;
		unordered_set<char> st;
		st.insert(s[0]);
		for (int i = 1; i < s.size(); i++)
		{
			if (st.find(s[i]) != st.end() && s[i - 1] != s[i]) {
				f = 1;
				break;
			}
			else st.insert(s[i]);
		}
		if (f == 1) cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}