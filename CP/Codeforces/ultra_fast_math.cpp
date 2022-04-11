#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	string s1, s2;
	cin >> s1 >> s2;
	string res = "";
	for (int i = 0; i < s1.size(); ++i)
	{
		if (s1[i] == s2[i]) res.pb('0');
		else res.pb('1');
	}
	cout << res;


	return 0;
}