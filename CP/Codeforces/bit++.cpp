#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	int x = 0;
	while (t--)
	{
		string n;
		cin >> n;
		if (n == "++X") ++x;
		else if (n == "X++") x++;
		else if (n == "--X") --x;
		else if (n == "X--") x--;
	}
	cout << x;

	return 0;
}