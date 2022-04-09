#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	string s;
	cin >> s;
	std::vector<char> v;
	for (int i = 0; i < s.size(); i++)
		if (s[i] != '+') v.pb(s[i]);
	sort(v.begin(), v.end());
	s = "";
	for (auto i : v)
	{
		s.pb(i);
		s.pb('+');
	}
	s.pop_back();
	cout << s ;

	return 0;
}