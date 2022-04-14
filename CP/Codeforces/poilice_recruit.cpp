#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	int c = 0, o = 0;
	while (t--)
	{
		int n;
		cin >> n;
		if (n < 0) {
			if (o > 0) o--;
			else c++;
		}
		else o += n;
	}
	cout << c;
	return 0;
}