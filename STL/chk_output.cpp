#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

 int main()
 {
 	ios::sync_with_stdio(0);
 	int n;
 	cin>>n;
 	std::vector<string> v;
 	f(n)
 	{
 		string s;
 		cin>>s;
 		v.pb(s);
 	}
 	string s = v[n-1];
 	for (int i = n-1; i > 0; --i)
 	{
 		v[i] = v[i-1];
 	}
 	v[0] = s;
 	for(auto i:v)
 		cout<<i<<" ";
 	return 0;
 } 
