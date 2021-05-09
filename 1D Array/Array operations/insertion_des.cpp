#include<iostream>
#include<stdio.h>
using namespace std;

void insertion_des(int a[],int &n,int x,int pos)
{
    for(int i=n;i>pos;i--)
    {
        int temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
    }
    a[pos] = x;
    n++;
}
int main(){
    int n;
    cout<<"Enter no. of elements = ";
    cin>>n;
    int a[100];
    cout<<"Enter array ->\n";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int x,pos;
    cout<<"Enter element to insert = ";
    cin>>x;
    cout<<"Enter index = ";
    cin>>pos;
    insertion_des(a,n,x,pos);
    cout<<"Array ->\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}