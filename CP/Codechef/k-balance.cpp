#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int c=0;
		for(int i=0;i+k<n;i++)
		{
			if(s[i] != s[i+k+1]){
				s[i+k+1] = s[i];
				c++;
			}
		}
		cout<<c<<endl;
	}
	return 0;
}