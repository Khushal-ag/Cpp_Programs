#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a+b+c) <= d) cout<<"1\n";
		else if(b+c <= d || a+b <= d) cout<<"2\n";
		else cout<<"3\n";
	}
	return 0;
}