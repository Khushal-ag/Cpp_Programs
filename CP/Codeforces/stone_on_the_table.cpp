#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int r = 0,g = 0,b = 0;
    for(auto i:s)
    {
        if(i == 'R') r++;
        else if(i == 'G') g++;
        else b++;
    }
    int a[] = {r,g,b};
    sort(a,a+3);
    cout <<a[2]-(a[0]+a[1]);
    return 0;
}