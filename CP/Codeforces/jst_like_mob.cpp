#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,x;
		cin>>n>>m>>k>>x;
		if(x%((n*k)+m)-(n*(k-1))>0 || x%((n*k)+m)==0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}