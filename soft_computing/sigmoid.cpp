#include <iostream>
#include<bits/stdc++.h>
using namespace std;
double sigmoid(double x) {
    return 1 / (1 + exp(-x));
}
int main() {
    double input;
    cin>>input;
    double result = sigmoid(input);
    cout << "Sigmoid of " << input << " is: " << result << endl;
    return 0;
}