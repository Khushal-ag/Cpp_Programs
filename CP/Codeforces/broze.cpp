#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	string s;
	cin >> s;
	int d = 0, u = 0;
	for (int i = 0; i < s.size(); i+=2)
	{
		if (s[i]=='-' && s[i+1]=='.') {
			cout<<"1";
		}
		else if (s[i]=='-' && s[i+1]=='-')
		{
			cout<<"2";
		}
		else if(s[i]=='.'){
			cout<<"0";
			i--;
		}
	}
	return 0;
}