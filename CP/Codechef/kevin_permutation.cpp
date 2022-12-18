#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a = n/2+1,b= 1;
		for(int i=1;i<=n/2;i++)
		{
			cout<<a<<" "<<b<<" ";
			a++;
			b++;
		}
		if(n%2!=0) cout<<a;
		cout<<endl;
	}
	return 0;
}