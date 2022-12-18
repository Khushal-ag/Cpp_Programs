/***
Author : Khushal Agarwal

Created : 10:20 23/11/22
***/

#include<bits/stdc++.h>
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		string bin;
		cin>>bin;
		if(bin[0]==bin[bin.size()-1]) cout<<bin.size()-2<<endl;
		else cout<<2<<endl;
	}
	return 0;
}