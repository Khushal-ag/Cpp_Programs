#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    int min=INT_MAX;
    int min_i,min_j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<min && a[i][j]!=0){
                min=a[i][j];
                min_i=i;
                min_j=j;
            }
        }
    }
    visited[min_i]=1;
    visited[min_j]=1;
    cout<<min_i<<" "<<min_j<<" "<<min<<endl;
    int count=1;
    while(count<n-1){
        min=INT_MAX;
        for(int i=0;i<n;i++){
            if(visited[i]==1){
                for(int j=0;j<n;j++){
                    if(visited[j]==0 && a[i][j]<min && a[i][j]!=0){
                        min=a[i][j];
                        min_i=i;
                        min_j=j;
                    }
                }
            }
        }
        visited[min_j]=1;
        cout<<min_i<<" "<<min_j<<" "<<min<<endl;
        count++;
    }
    return 0;
}