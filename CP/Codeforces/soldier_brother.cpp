#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int k, n, w;
	cin >> k >> n >> w;
	int amount = k * (w * (w + 1) / 2);
	if (n >= amount) cout << "0";
	else cout << amount - n;
	return 0;
}