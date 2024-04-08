#include <iostream>
#include <bits/stdc++.h>
using namespace std;
double sigmoid(double x)
{
    return (2.0 / (1 + exp(-x))) - 1;
}
int main()
{
    double input;
    cin >> input;
    double result = sigmoid(input);
    cout << "Sigmoidal of " << input << " is: " << result << endl;
    return 0;
}