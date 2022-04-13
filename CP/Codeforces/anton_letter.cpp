#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	string s;
	getline(cin, s);
	unordered_set<char> st;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z') st.insert(s[i]);
	}
	cout << st.size() << endl;
	return 0;
}