#include <bits/stdc++.h>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		int n,f=0;
		cin >> n;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			int x;
			cin>>x;
			v.push_back(x);
		}
		int ans = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			int curr = v[i];
			int count = 0;
			while(curr%2==0)
			{
				curr /= 2;
				count++;
			}
			ans = min(ans,count);
		}
		cout<<ans<<endl;
	}
	return 0;
}