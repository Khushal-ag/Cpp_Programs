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
    	vector<int> v;
    	for(int i=0;i<2*n;i++)
    	{
    		int x;
    		cin>>x;
    		v.pb(x);
    	}
    	sort(v.begin(),v.end());
    	int m = v[2*n-1]-v[0];
    	for(int i=0;i<=n;i++)
    		m = min(m,v[i+n-1]-v[i]);
    	cout<<m<<endl;

    }
    return 0;					
}