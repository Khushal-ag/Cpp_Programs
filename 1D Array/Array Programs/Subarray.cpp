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
    for(int i=0;i<n;i++)
    {
        int sum =0;
        for(int j=i;j<n;j++)
        {
            sum += a[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}