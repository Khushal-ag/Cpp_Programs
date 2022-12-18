#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,x1,y1,x2,y2;
		cin>>n>>x1>>y1>>x2>>y2;
		int temp1 = min(n-x1+1,x1);
		int temp2 = min(n-y1+1,y1);
		int temp3 = min(n-x2+1,x2);
		int temp4 = min(n-y2+1,y2);
		int ans1 = min(temp1,temp2)+min(temp3,temp4);
		int ans2 = abs(x2-x1) + abs(y2-y1);	
		cout<<min(ans1,ans2)<<endl;
	}
	return 0;
}	