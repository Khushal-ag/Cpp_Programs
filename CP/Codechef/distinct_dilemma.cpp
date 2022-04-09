#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            s.insert(x);
        }
        int m = *max_element(v.begin(),v.end());
        for(int i = 1;i<m;i++)
        {
            s.insert(i);
        }
        cout<<s.size()-1<<endl;
    }
    return 0;
}