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
    	int a,b;
    	cin>>a>>b;
    	if((100-a)<(200-2*b)) cout<<"FIRST\n";
    	else if((100-a)>(200-2*b)) cout<<"SECOND\n";
    	else cout<<"BOTH\n";

    }
    return 0;					
}