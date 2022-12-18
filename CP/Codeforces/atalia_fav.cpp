#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		char temp = *max_element(s.begin(),s.end());
		cout<<temp-'a'+1<<endl;
	}
	return 0;
}