#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	int X = 0, Y = 0, Z = 0;
	while (t--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		X += x;
		Y += y;
		Z += z;
	}
	if (X == 0 && Y == 0 && Z == 0) cout << "YES";
	else cout << "NO";

	return 0;
}