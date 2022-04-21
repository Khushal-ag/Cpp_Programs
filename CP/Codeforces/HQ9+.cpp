#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	string s;
	cin >> s;
	for (auto i : s)
	{
		if (i == 'H' || i == 'Q' || i == '9' && i >= 33 && i <= 126) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}