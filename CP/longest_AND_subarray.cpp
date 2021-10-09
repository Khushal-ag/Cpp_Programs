#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int power = log2(n);
		int x = pow(2,power);
		int ans = max(n-x+1,x/2);
		cout<<ans<<endl;	
	}
	return 0;
}