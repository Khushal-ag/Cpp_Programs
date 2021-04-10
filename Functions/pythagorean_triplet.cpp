#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int h = max(x,max(y,z));
    cout<<h;
    return 0;
}