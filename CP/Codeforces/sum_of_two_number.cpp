/*
	Author : Khushal_Agarwal
*/

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
#define lld long double
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define p(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define s(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define INF 1e18+9
#define endl '\n'
#define mod 1000000007
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

using namespace std;

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

	int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int i=0,f=0;
    	vector<int> d(10);
    	while(n){
    		d[i++]=n%10;
    		n/=10;
    	}
    	vector<int> v1(10),v2(10);
    	for(int j=0;j<i;j++)
    	{
    		if(d[j]&1){
    			v1[j] = d[j]/2+f;
    			v2[j] = d[j]/2+1-f;
    			f = 1-f;
    		}
    		else v1[j]=v2[j]=d[j]/2;
    	}
    	int a=0,b=0,m=1;
    	for(int j=0;j<i;j++)
    	{
    		b+=v2[j]*m;
    		a+=v1[j]*m;
    		m*=10;
    	}
    	cout<<a<<" "<<b<<endl;

    }
    return 0;					
}