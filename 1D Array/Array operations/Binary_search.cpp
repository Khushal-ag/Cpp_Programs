#include<iostream>
#include<stdio.h>
using namespace std;
void binary_search(int a[],int n,int x)
{
    int first=0,last=n-1,f=0;
    while(first<=last)
    {
        int mid = (first + last) / 2;
        if(a[mid]==x)
        {
            f =1;
            printf("%d found at %d index",x,mid);
            break;
        }
        else if(a[mid]<x)
            first = mid+1;
        else
            last = mid - 1;
    }
    if(f==0)
        cout<<x<<"Not found";
}

int main(){
    int n,x;
    cout << "Enter number of elements = ";
    cin >> n;
    int a[n], max_no = INT_MIN, min_no = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element = ", i + 1);
        cin >> a[i];
    }
    cout << "Enter element to search = ";
    cin >> x;
    binary_search(a, n, x);

    return 0;
}