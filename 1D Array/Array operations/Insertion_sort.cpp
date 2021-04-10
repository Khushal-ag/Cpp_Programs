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
    for(int i=1;i<n;i++)
    {
        int current = a[i],j=i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        } 
        a[j+1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}