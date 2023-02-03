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
    	vector<int> odd,even;
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		if(x%2) odd.pb(i+1);
    		else even.pb(i+1);
    	}
    	if(odd.size()<1 || (odd.size()<=2 && even.size()<2)) no;
    	else{
    		yes;
    		if(odd.size()>2){
    			cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<endl;
    		}
    		else if(odd.size()>0 && even.size()>1){
    			cout<<odd[0]<<" "<<even[0]<<" "<<even[1]<<endl;	
    		}
    	}

    }
    return 0;					
}