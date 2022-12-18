/***
Author : Khushal Agarwal

Created : 10:30 23/11/22
***/

#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int l = 0,r = v.size()-1,c=0;
		while(l<r)
		{
			if(v[l]==v[r]){
				l++;
				r--;
			}
			else if(v[l]>v[r]){
				v[l]-=v[r];
				r--;
				c++;
			}
			else {
				v[r]-=v[l];
				l++;
				c++;
			}
		}
		cout<<c<<endl;

	}
	return 0;
}