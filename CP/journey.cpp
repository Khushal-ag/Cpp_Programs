#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s,c=0;
	cin>>s;
	while(s!=1)
	{
		if(s%2==0) s /= 2;
		else s = 3*s + 1;
		c++;
	}
	cout<<c;
}