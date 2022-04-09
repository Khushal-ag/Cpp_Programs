#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int a, b;
	cin >> a >> b;
	int c = 0;
	while (1)
	{
		if (a > b) break;
		a *= 3;
		b *= 2;
		c++;
	}
	cout << c;
	return 0;
}