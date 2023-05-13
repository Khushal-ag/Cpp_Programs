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
    	vector<int> onemin,twomin,bothmin;
    	int tempmina=0,tempminb=0;
    	while(n--)
    	{
    		int x;
    		cin>>x;
    		string s;
    		cin>>s;
    		if(s=="01"){
    			onemin.pb(x);
    		}
    		else if(s=="10")
    			twomin.pb(x);
    		else if(s=="11"){
    			bothmin.pb(x);
    		}
    	}
    	if(onemin.size()&&twomin.size()){
    	sort(onemin.begin(),onemin.end());
    	sort(twomin.begin(),twomin.end());
    	tempmina = onemin[0]+twomin[0];
    	}
    	if(bothmin.size()){
    	sort(bothmin.begin(),bothmin.end());
    	tempminb = bothmin[0];
    	}
    	if(tempmina&&tempminb)
    	cout<<min(tempminb,tempmina)<<endl;
    	else if(tempmina)
    		cout<<tempmina<<endl;
    	else if(tempminb) cout<<tempminb<<endl;
    	else cout<<-1<<endl;

    }
    return 0;					
}