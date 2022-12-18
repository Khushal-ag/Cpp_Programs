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
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		vector<int> v2 = v;
		int max = *max_element(v.begin(),v.end());
		sort(v2.begin(),v2.end());
		int smax = v2[n-2];
		for(auto i:v)
		{
			if(i!=max) cout<<i-max<<" ";
			else cout<<i-smax<<" ";
		}
		cout<<endl;

	}
	return 0;
}