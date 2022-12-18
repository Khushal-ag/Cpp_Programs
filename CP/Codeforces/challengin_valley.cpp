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
		int c = 0,s = 0,ans = 0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		if(n==1) cout<<"YES\n";
		else{	
			for(int i=1;i<n;i++){
				if(v[i]>v[i-1] && s==0){
					s = 1;
					c++;
				}
				else if(v[i]<v[i-1] && s==1){
					s = 0;
					c++;
				}
				if(c==2) ans = 1;
			}
			if(ans==0)
			cout<<"YES\n";
			else cout<<"NO\n";
		}

	}
	return 0;
}