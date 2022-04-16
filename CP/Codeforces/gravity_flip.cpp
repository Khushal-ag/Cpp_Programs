#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	vector<int> v;
	for (int i = 0; i < t; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for (auto i : v)
		cout << i << " ";
	return 0;
}