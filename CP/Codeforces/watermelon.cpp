#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	if (t % 2 == 0 && t > 2) cout << "YES";
	else cout << "NO";
	return 0;
}