#include<bits/stdc++.h>
 using namespace std;

 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int x,y;
 		cin>>x>>y;
 		int n = y-x;
 		int ans = n/2 + (n%2)*2;
 		cout<<ans<<endl; 
 	}

 	return 0;
 }