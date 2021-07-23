#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int d,x,y,z;
       cin>>d>>x>>y>>z;
       int m = max(7*x, y*d + z*(7-d));
       cout<<m<<endl; 
	}
	return 0;
}
