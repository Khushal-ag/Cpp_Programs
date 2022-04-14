#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	int n;
	cin >> n;
	t--;
	int max = n, min = n;
	int c = 0;
	while (t--)
	{
		cin >> n;
		if (n > max) {
			max = n;
			c++;
		}
		else if (n < min) {
			min = n;
			c++;
		}
	}
	cout << c;

	return 0;
}