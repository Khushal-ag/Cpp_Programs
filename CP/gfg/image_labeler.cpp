#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
        cin>>n>>k;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        if(v[k]==0) cout<<"0";
        int ans = k+1;
        int i = k+1;
        while(v[i]==v[k])
        {
            ans++;
            i++;
        }
        cout<<ans;

    return 0;                    
}