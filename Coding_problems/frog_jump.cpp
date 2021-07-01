#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int r,l,k,m=0;
        cin>>r>>l>>k;
        if(k%2 == 0)
        {
           m = (k/2)*(r-l);
        }
        else
        {
            m = (k/2)*(r-l) + r;
        }
        cout<<m<<endl;

    }
    return 0;
}