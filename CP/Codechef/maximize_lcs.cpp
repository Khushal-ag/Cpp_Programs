// author : khushal agarwal

#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	string s;
    	cin>>s;
    	string temp = s;
    	reverse(s.begin(),s.end());
    	std::vector<std::vector<int>> v(n+1,vector<int>(n+1,0));
    	for (int i = 1; i <= n; ++i)
    	{
    		for (int j = 1; j <=n; ++j)
    		{
    			if(s[j-1]!=temp[i-1]) v[i][j] = max(v[i][j-1],v[i-1][j]);
    			else v[i][j] = v[i-1][j-1]+1;
    		}
    	}
    	cout<<v[n][n]/2<<endl;

    }
    return 0;					
}