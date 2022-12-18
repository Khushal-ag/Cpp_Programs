#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<n;i++){
            if(st.top()==s[i]){
                st.pop();
                st.push('0');
            }
            else
                st.push(s[i]);
        }
        if(st.size()==1) cout<<"YES\n";
        else{
            char temp = st.top();
            st.pop();
            while(!st.empty() && st.top()==temp) 
            st.pop();
            if(st.empty()) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}