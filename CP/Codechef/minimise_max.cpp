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

bool help(int n,vector<ll> v,ll mid)
{
	vector<ll> temp = v;
	if(temp[0]>mid) return false;
	for (int i = 1; i < n; ++i)
	{
		if(temp[i-1]<mid){
			ll b = mid - temp[i-1];
			temp[i-1] = mid;
			temp[i] -= b;
		}
		if(temp[i]>mid) return false;
	}
	ll m = *max_element(temp.begin(),temp.end());
	if(m>mid) return false;
	return true;
}

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

	int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<ll> v;
    	for (int i = 0; i < n; ++i)
    	{
    		int x;
    		cin>>x;
    		v.pb(x);
    	}
    	ll start = 0;
    	ll end = *max_element(v.begin(),v.end());
    	ll ans = LONG_MAX;
    	while(start<=end){
    		ll mid = start+(end-start)/2;
    		if(help(n,v,mid)){
    			ans = min(ans,mid);
    			end = mid-1;
    		}
    		else start = mid+1;

    	}
    	cout<<ans<<endl;

    }
    return 0;					
}