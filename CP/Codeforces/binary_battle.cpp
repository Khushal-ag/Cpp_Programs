#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		n = log2(n);
		cout<<n*a + (n-1)*b<<endl;
	}
	return 0;
}