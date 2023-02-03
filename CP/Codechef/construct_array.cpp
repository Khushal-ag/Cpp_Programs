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
	int n;
    	cin>>n;
    	while(n--)
    	{
    		int x;
    		cin>>x;
    		if(x%2){
    			cout<<-1<<endl;
    			continue;
    		}
    		int a = 1;
    		vector<ll> v(x,0);
    		for(int i=0;i<x/2;i++)
    		{
    			if(i%2==1){
    				v[i] = -a;
    				v[x-i-1] = a;
    			}
    			else{
    				v[i] = a;
    				v[x-i-1] = -a;
    			}
    			a++;
    		}
    		for(auto i:v)
    			cout<<i<<" ";
    		cout<<endl;
    	}
    return 0;					
}