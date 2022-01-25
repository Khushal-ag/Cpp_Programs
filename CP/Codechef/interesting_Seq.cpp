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
 		int k;
 		cin>>k;
 		std::vector<int> v;
 		int n = k;
 		while(n>1)
 		{
 			n/=2;
 			v.pb(n);
 		}
 		
 		cout<<v.size()<<endl;
 	}

 	return 0;
 }