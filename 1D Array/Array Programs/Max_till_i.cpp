#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element = ", i + 1);
        cin >> a[i];
    }
    int i,m=a[0];
    cout<<"Enter i = ";
    cin>>i;
    for(int j=0;j<=i;j++)
    {
        if(a[j]>m)
            m=a[j];
        cout<<m<<" ";
    }
    return 0;
}