#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	string s = s1 + s2;
	multi_set<char> mst1(begin(s), end(s));
	multi_set<char> mst2(begin(s3), end(s3));
	if (mst1 == mst2) cout << "YES";
	else cout << "NO";
	return 0;
}