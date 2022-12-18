#include<bits/stdc++.h>

using namespace std;
bool isprime(int s)
{
	for(int i=2;i<=sqrt(s);i++)
			if(s%i==0) return false;
		return true;
}
int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int s = a+b;
		if(isprime(s)) cout<<"Alice\n";
		else cout<<"Bob\n";

	}
	return 0;
}