#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int r,c;
		cin>>r>>c;
		for (int i = 1; i <= r; ++i)
		{
			for (int j = 1; j <= c; ++j)
			{
				if((i+j)%2==0) cout<<"*";
				else cout<<".";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}