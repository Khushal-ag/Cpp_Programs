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
    int ans = 2,diff = a[1] - a[0],i=2,curr=2;
    while(i<n)
    {
        if(diff == a[i]-a[i-1])
        {
            curr++;
        }
        else{
            diff = a[i]-a[i-1];
            curr = 2;
        }
        ans = max(ans,curr);
        i++;
    }
    cout<<"Max length = "<<ans;
    return 0;
}