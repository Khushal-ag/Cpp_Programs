#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		vector<std::vector<int>> v(0,vector<int>(0,64));
		for (int i = 0; i < n; ++i)
		{
			long long x;
			cin>>x;
			for (int j = 0; j < 64; ++j)
			{
				v[j][i] = (x%2);
				x/=2;
			}
		}
		for (int i = 0; i < 64; ++i)
		{
			long long c = 0;
			for (int j = 0; j < n; ++j)
			{
				c += v[i][j];
				v[i][j] = c;
			}
		}
		while(q--)
		{
			int k,l1,r1,l2,r2;
			cin>>k>>l1>>r1>>l2>>r2;
			l1--;r1--;l2--;r2--;
			int f = r1-l1+1;
			int s = r2-l2+1;
			int tf,ts;
			if(l1 == 0) tf = v[k][r1];
			else tf = v[k][r1]-v[k][l1-1];
			if(l2 == 0) ts = v[k][r2];
			else ts = v[k][r2]-v[k][l2-1];
			long long sum = (f - tf)*ts + tf*(s - ts);
			cout<<sum<<endl;
		}
	}
	return 0;
}