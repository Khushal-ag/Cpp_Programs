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

unordered_map<int,int> m;

int fact(ll num)
{
	int x = 1;
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			int c = 0;
			while(num%i==0){
				c++;
				num/=i;
			}
			m[i] = c;
			x = max(x,c);
		}
	}
	if(num != 1) m[num] = 1;
	return x;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

	int t;
    cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	ll ans = 0;
    	int x = fact(n);
    	for(int i=0;i<x;i++)
    	{
    		int temp = 1;
    		for(auto i:m)
    		{
    			if(i.second > 0){
    				m[i.first]--;
    				temp *= i.first;
    			}
    		}
    		ans += temp;
    	}
    	cout<<ans<<endl;
    }
    return 0;					
}