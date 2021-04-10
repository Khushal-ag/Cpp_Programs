#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int s;
    cin>>s;
    int i=0,j=0,st=0,en=0,sum=0;
    while(j<n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if(sum == s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    return 0;
}