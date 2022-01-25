#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,j;
		cin>>n>>k;
		std::vector<int> a(n+1);
		for (i = 1; i <= n && k>0; ++i,k--)
		{
			a[i] = i;
		}
		for (j = i; j < n; ++j)
		{	
			a[j] = j+1;
		}
		if(i<=n) a[n] = i;
		int f=0;
		for (j = i; j <=n; ++j)
		{
			if(a[j]==j){
				f=1;
				break;
			}
		}
		if(f==1) cout<<"-1\n";
		else{
		for (i = 1; i <= n; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;	
		}
		
	}
	return 0;
}