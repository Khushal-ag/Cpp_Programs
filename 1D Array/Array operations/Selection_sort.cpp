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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
    return 0;
}