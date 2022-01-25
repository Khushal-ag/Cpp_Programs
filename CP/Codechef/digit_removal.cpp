#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int temp = n,r,ans=0,c=0;
		while(temp>0){
			r = temp%10;
			temp /= 10;
			c++;
			if(r == d)
			{
				temp = temp*pow(10,c) + (r+1)*pow(10,c-1);
				ans = temp - n;
				c = 0;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}