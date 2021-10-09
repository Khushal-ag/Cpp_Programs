#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,s;
		cin>>n>>s;
		int ans = s<=n ? s : n - (s-n);
		cout<<ans<<endl;
	}
	return 0;
}