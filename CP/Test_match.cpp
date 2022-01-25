#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[5],india=0,eng=0;
		for (int i = 0; i < 5; ++i)
		{
			cin>>a[i];
			if(a[i]==1) india++;
			else if(a[i]==2) eng++;
			else{
				india++;
				eng++;
			} 
		}
		if(india>eng)cout<<"INDIA\n";
		else if(eng>india)cout<<"ENGLAND\n";
		else cout<<"DRAW\n";
	}
	return 0;
}