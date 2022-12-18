#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,s=0;
		cin>>n>>k;
		vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			v.push_back(x);
			if(x==k && i!=n-1) s = 1;
		}
		if(n==1 && k==v[0]) {
			cout<<"YES\n";
			continue;
		}
		if(s==0) cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}