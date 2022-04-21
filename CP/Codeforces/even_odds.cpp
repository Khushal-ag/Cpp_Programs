#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n, k;
	cin >> n >> k;
	if (k > ceil(n / 2.0)) cout << 2 * (k - ceil(n / 2.0));
	else cout << 2 * k - 1;
	return 0;
}