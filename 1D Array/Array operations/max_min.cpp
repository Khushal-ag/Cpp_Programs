#include<iostream>
#include<limits.h>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements = ";
    cin>>n;
    int a[n],max_no = INT_MIN,min_no = INT_MAX;
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element = ",i+1);
        cin>>a[i];
        max_no = max(max_no,a[i]);
        min_no = min(min_no,a[i]);
    }
    printf("Max = %d\nMin = %d",max_no,min_no);  
    return 0;
}