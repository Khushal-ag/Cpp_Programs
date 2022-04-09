#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	string s1, s2;
	cin >> s1 >> s2;
	transform(s1.begin(), s1.end(), s1.begin, ::tolower);
	transform(s2.begin(), s2.end(), s2.begin, ::tolower);
	cout << s1;
	cout << s2;

	return 0;
}