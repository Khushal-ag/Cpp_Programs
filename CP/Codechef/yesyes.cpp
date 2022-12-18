#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int index;
		string temp = "";
		for(int i=0;i<20;i++)
		{
			temp += "Yes";
		}
		if((index = temp.find(s,0))==string::npos) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}