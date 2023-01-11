#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin>>t;
    while(t--){
    	int a,b,c;
    	cin>>a>>b>>c;
    	if(a==b+c || b==a+c || c == a+b) cout<<"YES\n";
    	else cout<<"NO\n";

    }
    return 0;					
}