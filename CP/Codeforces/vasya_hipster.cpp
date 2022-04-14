#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	cout << min(a, b) << " " << (max(a, b) - min(a, b)) / 2;
	return 0;
}