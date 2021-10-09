#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; ++i) cin>>a[i];
		while(k--)
		{
			for (int i = 0; i < n; ++i)
			{
				if(a[i]>0)
				{
					if(i==n-1)
					{
						a[i-1]++;
						a[0]++;
					}
					else if(i==0)
					{
						a[i+1]++;
						a[n-1]++;
					}
					else{
						a[i+1]++;
						a[i-1]++;
					}
				}
			}
		}
		int s = 0;
		for (int i = 0; i < n; ++i)
				{
					s += a[i];
									}		
	cout<<s<<endl;
	}
	return 0;
}