#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		if(z*2>=y-x) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}