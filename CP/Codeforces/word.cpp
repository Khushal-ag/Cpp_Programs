#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	string s;
	cin >> s;
	int u = 0, l = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') u++;
		else l++;
	}
	if (u > l) transform(s.begin(), s.end(), s.begin(), ::toupper);
	else transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s;
	return 0;
}