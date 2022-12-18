#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int l,r,x,a,b;
		cin>>l>>r>>x>>a>>b;
		int v1=abs(a-l),v2=abs(r-a),v3=abs(b-l),v4=abs(r-b);
		if(a==b) cout<<0<<endl;
		else if(abs(a-b)>=x) cout<<1<<endl;
		else if((v1<x && v2<x) || (v3<x && v4<x)) cout<<-1<<endl;
		else{
			if(v1<x){
				if(v4>=x) cout<<2<<endl;
				else cout<<3<<endl;
			}
			else if(v2<x){
				if(v3>=x) cout<<2<<endl;
				else cout<<3<<endl;
			}
			else cout<<2<<endl;
		}
	}
	return 0;
}