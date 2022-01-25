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
		if(n == 0)cout<<"1\n";
		else if(n == 1 || n == 2) cout<<"2\n";
		else
		{
			int s= 1;
			while(2*s <= n)
			s *= 2;
			if(s == n) cout<<n<<endl;
			else if(n == (2*s - 1)) cout<<n+1<<endl;
			else cout<<s<<endl;
		}
	}
	return 0;
}