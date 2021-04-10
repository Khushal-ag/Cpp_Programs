#include<iostream>
using namespace std;
void fib(int n)
{
    long long int a=0,b=1,c=0;
    if(n==1)
        cout<<a;
    else if(n==2)
        cout<<a<<" "<<b;
    else
    {
        while(n--)
        {
            cout<<a<<" ";
            c = a+b;
            a = b;
            b = c;
        }
    }


}
int main(){
    int n;
    cout<<"Enter a number = ";
    cin>>n;
    fib(n);
    return 0;
}