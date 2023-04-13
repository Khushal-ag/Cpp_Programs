// quicksort in cpp

#include<bits/stdc++.h>

using namespace std;

void quick(vector<int> v,int start,int end){

}
int main(){
    int n;
    cout << "Enter number of elements : ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quick(v,0,n-1);

    cout << "Sorted Array : ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}