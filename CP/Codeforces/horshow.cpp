#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	unordered_set<int> s;
	int t = 4;
	while (t--)
	{
		int x;
		cin >> x;
		s.insert(x);
	}
	cout << 4 - s.size();
	return 0;
}