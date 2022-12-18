#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	int max = 0, min = 0;
	for (int i = 0; i < v.size(); i++)
		if (i % 2 == 0) max += v[i];
		else min += v[i];
	cout << max << " " << min;
	cout<<" ";
	for (int i = 0; i < 5; i++)
		cout << i;
	return 0;
}