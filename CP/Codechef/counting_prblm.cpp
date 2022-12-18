#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		int o=0,e=0;
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			if(x%2) o++;
			else e++;
		}
		if(o==0 || o%2==1) cout<<"NO\n";
		else cout<<"YES\n";

	}
	return 0;
}