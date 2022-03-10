#include <bits/stdc++.h>
using namespace std;
int zero(int n)
{
	while (n != 0)
	{
		if (n % 10 == 0) return 0;
		n /= 10;
	}
	return 1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, c;
		cin >> n;
		for (int i = pow(10, n - 1); i < pow(10, n); ++i)
		{
			if (i % 3 == 0 && i % 9 != 0 && i % 2 == 1 && zero(i)) {
				c = i;
				break;
			}
		}
		cout << c << endl;
	}
	return 0;
}