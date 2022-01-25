#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[7],c=0;
		for (int i = 0; i < 7; ++i)
		{
			cin>>a[i];
			if(a[i]==1) c++;
		}
		if(c>7-c) cout<<"YES\n";
		else cout<<"NO\n";
		
	}
	return 0;
}