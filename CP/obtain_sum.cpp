#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,s;
		cin>>n>>s;
		long long int sum = n*(n+1)/2;
		long long int x= 0;
		if(sum>s) x = sum - s; 
		
		if (x >= 1 && x <= n)
		{
			cout<<x<<endl;		
		}
		else cout<<"-1\n";	
	}
	return 0;
}