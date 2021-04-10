#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements = ";
    cin >> n;
    int a[n+1];
    a[n] = -1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element = ", i + 1);
        cin >> a[i];
    }
    int m = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>m && a[i]>a[i+1])
            printf("%d day is record breaking.\n",i+1);
        m = max(m, a[i]);
    }

    return 0;
}