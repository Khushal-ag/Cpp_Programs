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
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum += x;
		v.pb(x);
	}
	sort(v.begin(), v.end());
	std::vector<int> res;
	int ressum = 0;
	for (int i = v.size() - 1; i >= 0; i--)
	{
		ressum += v[i];
		res.pb(v[i]);
		sum -= v[i];
		if (ressum > sum) break;
	}
	cout << res.size();
	return 0;
}