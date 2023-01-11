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
    	int n,m;
    	cin>>n>>m;
    	vector<int> v;
    	for (int i = 0; i < n+m; ++i)
    	{
    		int x;
    		cin>>x;
    		v.pb(x);
    	}
    	sort(v.rbegin(),v.rend());
    	ll s = 0;
    	for(int i=0;i<n;i++)
    		s += v[i];
    	cout<<s<<endl;

    }
    return 0;					
}