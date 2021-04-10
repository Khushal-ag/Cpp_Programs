#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        if(c%2==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
        if (n == 0)
            break;
    }
    return 0;
}