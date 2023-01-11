#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin>>t;
    while(t--){
    	
    	int n;
    	cin>>n;
    	int s = 0;
    	unordered_map<int,int> m;
    	for (int i = 0; i < n; ++i)
    	{
    		int x;
    		cin>>x;
    		m[x]++;
    	}
    	if(n%2==0)
    	{
    		for(auto i:m)
    		{
    			if(i.second%2!=0){
    				s=1;
    				break;
    			}
    		}
    	}
    	else s=1;
    	if(s==0) cout<<"YES\n";
    	else cout<<"NO\n";

    }
    return 0;					
}