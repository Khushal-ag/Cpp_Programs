#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int m,s;
		cin>>m>>s;
		int sum = 0;
		int sw = 0;
		int maxn = INT_MIN;
		vector<int> v;
		map<int,int> ma;
		while(m--){
			int x;
			cin>>x;
			ma[x]++;
			if(ma[x]==2) sw=1;
			v.push_back(x);
			sum += x;
			maxn = max(maxn,x);
		}
		int temp = maxn*(maxn+1)/2;
		temp = temp-sum;
		s = s-temp;
		if(sw==1) cout<<"NO\n";
		else if(s==0){
			cout<<"YES\n";
		}
		else if(s<0) cout<<"NO\n";
		else{
			while(s>0)
			{
				maxn++;
				s -= maxn;
			}
			if(s==0) cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
	return 0;
}