#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	int seat = 0;
	int capacity = 0;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		seat -= a;
		seat += b;
		capacity = max(capacity, seat);
	}
	cout << capacity;

	return 0;
}