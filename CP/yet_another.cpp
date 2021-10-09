#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int l,r,i;
		cin>>l>>r;
		int f = 0;
		for(i=l;i<=r;i++)
		{
			if(i%3==0){
				f = 1;
				break;
			}
		}
		if(f==0) cout<<"0\n";
		else
		{
			long long int ans = (r-i)/3;
			cout<<ans+1<<endl;
		}
	}
	return 0;
}