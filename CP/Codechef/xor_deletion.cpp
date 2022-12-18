#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int, int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int temp = 0;
        int arr[n + 1] = {0};
        for(auto i:m)
        {
            temp = max(temp,i.second);
            arr[i.first] = i.second;
        }
        int res = 0;
        for (int i = 0; i < n;i++)
        {
            if((i^(i+1))<=1)
                res = max(res, arr[i] + arr[i + 1]);
        }
        res = max(res, temp);
        cout << n - res << endl;

        return 0;
}