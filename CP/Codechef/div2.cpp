#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n;
		if(n==1) cout<<"3\n";
		else if(n==2) cout<<"33\n";
		else{
			cout<<"3";
			for(int i=1;i<=n-2;i++)
			cout<<"0";
			cout<<"3\n";
		}
	}
	return 0;
}