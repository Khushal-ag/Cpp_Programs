#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int d = 0;
    for(auto i:s)
    {
        if(i == '4' || i == '7') d++;
    }
    if(d == 4 || d == 7) cout << "YES";
    else cout << "NO";
    return 0;
}