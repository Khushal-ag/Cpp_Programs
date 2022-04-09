#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int x,o=0,e=0;
        for(int i=1;i<=n;i++){
            cin>>x;
            if(x%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        if(o%2==0)
        cout<<min(o,e)/2<<endl;
        else cout<<e<<endl;
    }
    return 0;
}