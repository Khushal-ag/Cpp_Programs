#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    while(1)
    {
        int n,c=0;
        cin>>n;
        if (n == 0)
            break;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;
        }
        if(c%2==0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}