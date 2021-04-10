#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main(){
    while(1)
    {
        long long int n;
        cin>>n;
        if (n == 0)
            break;
        double p=sqrt(n);
        if(p==(int)p)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}