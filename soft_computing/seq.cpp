#include <iostream>
#include <vector>
#include <sstream>

using namespace std; // Add this line to use the std namespace

int main()
{
    string input;
    getline(cin, input);
    int s;
    cin >> s;

    vector<int> seq;
    istringstream iss(input);
    int number;

    while (iss >> number)
    {
        seq.push_back(number);
    }

    for (int num : seq)
    {
        cout << num << " ";
    }

    return 0;
}
