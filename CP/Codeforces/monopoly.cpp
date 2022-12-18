#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,s=0;
		cin>>a>>b>>c;
		s = (a+b<c)?1:((b+c<a)?1:((a+c<b)?1:0));
		if(s==1) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}