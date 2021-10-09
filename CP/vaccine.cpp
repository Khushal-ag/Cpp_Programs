#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,l,r;
		cin>>d>>l>>r;
		if(d<l) cout<<"Too Early\n";
		else if(d>r) cout<<"Too Late\n";
		else cout<<"Take second dose now\n";
	}
	return 0;
}