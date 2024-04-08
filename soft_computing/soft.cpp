#include<bits/stdc++.h>
using namespace std;

int activation(int input1, int input2){
    int ans = 0;
    int[] weight1 = {0, 1};
    int[] weight2 = {0, 1};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            int sum = input1*weight1[i] + input2*weight2[j];
            if(sum >= 2){
                ans = 1;
                break;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int input1, input2;
    cin>>input1>>input2;
    int ans = activation(input1, input2);
    return 0;
}