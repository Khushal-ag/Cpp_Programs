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

    //Inputs
    int n;
    cin>>n;
    vector<int> p,a,b,c;
    int m;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	p.pb(x);
    }
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	a.pb(x);
    }for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	b.pb(x);
    }
    cin>>m;
    for(int i=0;i<n;i++)
    {
    	int x;
    	cin>>x;
    	c.pb(x);
    }
    // Main Logic

    vector<pair<int,int>> shirts;
    unordered_set<int> used;
    for(int i=0;i<n;i++)
    {
    	if(a[i]==b[i]) shirts.pb(make_pair(p[i],a[i]));
    	else {
    		shirts.pb(make_pair(p[i],a[i]));
    		shirts.pb(make_pair(p[i],b[i]));
    	}
    }
    sort(shirts.begin(),shirts.end());
    for(int i=0;i<m;i++)
    {
    	int color = c[i];
    	int s = 0;
    	for(auto e:shirts)
    	{
    		if(e.second==color){
    			if(used.find(e.first)==used.end()){
    				cout<<e.first<<" ";
    				used.insert(e.first);
    				s = 1;
    				break;
    			}
    		}
    	}
    	if(s==0) cout<<-1<<" ";
    }
    return 0;					
}