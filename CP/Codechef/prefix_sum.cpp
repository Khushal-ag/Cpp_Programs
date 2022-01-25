#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n%4!=0) cout<<"NO\n";
		else{
			cout<<"YES\n";
			std::vector<int> v1,v2;
			int T = n/2,f=0,s=1,l=n;
			while(T)
			{
				if(f==0){
					v1.push_back(s);
					s++;
					f = 1;
				}
				else{
					v1.push_back(l);
					l--;
					f = 0;
				}
				T--;
			}
			for(int i=s;i<=l;i++)
			{
				v2.push_back(i);
			}
			sort(v1.begin(),v1.end());
			sort(v2.begin(),v2.end());
			for(auto i:v1)
				cout<<i<<" ";
			cout<<endl;
			for(auto i:v2)
				cout<<i<<" ";
		}

	}
	return 0;
}