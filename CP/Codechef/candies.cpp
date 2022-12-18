#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		map<int,int> m;
		int s = 0;
		for(int i=1;i<=2*n;i++)
		{
			int x;
			cin>>x;
			m[x]++;
			if(m[x]>2) s=1;
		}
		if(s==0) cout<<"YES\n";
			else cout<<"NO\n";
	}
	return 0;
}