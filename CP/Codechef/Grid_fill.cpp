#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%2==0)
		{
			for (int i = 1; i <= n; ++i)
			{
				for (int j = 1; j <= n; ++j)
				{
					cout<<"-1 ";
				}
				cout<<endl;
			}
		}
		else
		{
			for (int i = 1; i <= n; ++i)
			{
				for (int j = 1; j <= n; ++j)
				{
					if(i!=j) cout<<"1 ";
					else cout<<"-1 ";
				}
				cout<<endl;
			}	
		}
	}
	return 0;
}