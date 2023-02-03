#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Enter number of elements : ";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    cout << "Sorter Array : ";5
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}