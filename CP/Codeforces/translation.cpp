#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	string s1, s2;
	cin >> s1 >> s2;
	reverse(s2.begin(), s2.end());
	if (s1 == s2 ) cout << "YES";
	else cout << "NO";

	return 0;
}