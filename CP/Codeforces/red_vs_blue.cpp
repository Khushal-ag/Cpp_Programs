#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n, r, b;
		cin >> n >> r >> b;
		int count = r / (b + 1);
		int extra = r % (b + 1);
		int c = 0, bcount = 0;
		string res = "";
		while (c < r)
		{
			res += string(count, 'R');
			c += count;
			if (extra) {
				res += 'R';
				c++;
				extra--;
			}
			if (bcount < b)
			{
				res += 'B';
				bcount++;
			}
		}
		cout << res << endl;
	}

	return 0;
}