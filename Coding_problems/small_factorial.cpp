#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double f=1;
        cin>>n;
        if(n == 1 || n == 0)
        {
            f = 1;
        }
        else
        {
            while(n != 1)
            {
                f *= n;
                n--;
            }
        }
        cout<<f<<endl;
    }
    
    return 0;
}