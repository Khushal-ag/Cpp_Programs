#include<iostream>
#include<stdio.h>
using namespace std;

void linear_search(int a[],int n,int x)
{
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=1;
            printf("%d is found at %d index.",x,i);
            break;
        }
    }
    if(f==0)
        cout<<x<<" not found.";
    return;
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
    cout<<"Enter element to search = ";
    cin>>x;
    linear_search(a,n,x);
    return 0;
}