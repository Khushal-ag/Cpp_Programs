#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	set<char> st(begin(s), end(s));
	if (st.size() == 26) cout << "YES";
	else cout << "NO";
	return 0;
}