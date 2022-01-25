#include<bits/stdc++.h>
using namespace std;

int main()
{
	std::vector<std::vector<int>> v;
	int r; cin>>r;
	int c; cin>>c;
	for (int i = 0; i < r; ++i)
	{
		v.push_back(vector<int> ());
		for (int j = 0; j < c; ++j)
		{
			int x; cin>>x;
			v[i].push_back(x);
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < v[i].size(); ++j)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}