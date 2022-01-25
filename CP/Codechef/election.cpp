#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

 int main()
 {
 	ios::sync_with_stdio(0);

 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int a,b,c;
 		cin>>a>>b>>c;
 		if(a>50) cout<<'A'<<endl;
 		else if(b>50) cout<<'B'<<endl;
 		else if(c>50) cout<<'C'<<endl;
 		else cout<<"NOTA"<<endl;

 	}

 	return 0;
 }