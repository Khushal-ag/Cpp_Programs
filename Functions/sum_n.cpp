#include<iostream>
using namespace std;
int sum(int n)
{
    int s=0;
    while(n>0)
    {
        s += n;
        n--;
    }
    return s;
}
int main(){
    int n;
    printf("Enter a number = ");
    cin>>n;
    int s = sum(n);
    cout<<"Sum upto "<<n<<" = "<<s;
    return 0;
}