#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int k, r;
	cin >> k >> r;
	for (int i = 1; i <= 10; i++)
	{
		if (k * i % 10 == 0 || (k * i - r) % 10 == 0) {
			cout << i;
			break;
		}
	}

	return 0;
}