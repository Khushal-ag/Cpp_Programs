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
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	if (v[0] == *max_element(v.begin(), v.end()) && v[n - 1] == *min_element(v.begin(), v.end()))
		cout <<

		     return 0;
}