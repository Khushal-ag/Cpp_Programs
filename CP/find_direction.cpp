#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		switch(n%4){
			case 1: cout<<"East\n";
					break;

			case 2: cout<<"South\n";
					break;

			case 3: cout<<"West\n";
					break;

			case 0: cout<<"North\n";
					break;
		}
	}
	return 0;
}