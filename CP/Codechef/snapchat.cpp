#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> v1;
    	vector<int> v2;
    	for (int i = 0; i < n; ++i)
    	{
    		int x;
    		cin>>x;
    		v1.push_back(x);
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		int x;
    		cin>>x;
    		v2.push_back(x);
    	}
    	int mxc = 0,c=0;
    	for (int i = 0; i < n; ++i)
    	{
    		if(v1[i]!=0 && v2[i]!=0)c++;
    		else
    			c=0;
    		mxc = max(mxc,c);

    	}
    	cout<<mxc<<endl;

    }
    return 0;					
}