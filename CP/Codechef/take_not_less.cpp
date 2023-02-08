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
    	int s = 1;
    	vector<int> v(n);
    	map<int,int> m;
    	for (int i = 0; i < n; ++i)
    		cin>>v[i];
    	sort(v.rbegin(),v.rend());
    	for(auto i:v)
    		m[i]++;
    	for(auto i:m)
    	{
    		if(i.second%2){
    			s = 0;
    			break; 
    		}
    	}
    	if(s)cout<<"zenyk\n";
    	else cout<<"marichka\n";

    }
    return 0;					
}