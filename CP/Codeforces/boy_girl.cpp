#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	string s;
	cin >> s;
	unordered_set<char> set;
	for (auto i : s)
		set.insert(i);
	if (set.size() % 2 == 0) cout << "CHAT WITH HER!";
	else cout <<  "IGNORE HIM!" ;
	return 0;
}