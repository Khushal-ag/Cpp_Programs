#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	unordered_map<string, int> m;
	m["Tetrahedron"] = 4;
	m["Cube"] = 6;
	m["Octahedron"] = 8;
	m["Dodecahedron"] = 12;
	m["Icosahedron"] = 20;
	int n;
	cin >> n;
	int face = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		face += m[s];
	}
	cout << face;
	return 0;
}