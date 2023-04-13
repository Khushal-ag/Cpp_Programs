#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter number of elements : ";
    cin>>n;
    vector<int> v(n);
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m = max(m, v[i]);
    }
    vector<int> count(m+1,0);
    for(int i=0;i<n;i++){
        count[v[i]]++;
    }
    for(int i=1;i<=m;i++){
        count[i]+=count[i-1];
    }
    vector<int> output(n);
    for(int i=n-1;i>=0;i--){
        output[count[v[i]]-1]=v[i];
        count[v[i]]--;
    }
    for(int i=0;i<n;i++){
        v[i]=output[i];
    }
    cout << "Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}