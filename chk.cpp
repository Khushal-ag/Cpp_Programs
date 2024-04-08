#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream inputfile;
    inputfile.open("t.txt");
    string n;
    int sum = 0;
    int ans = 0;
    vector<int> v;
    while (getline(inputfile, n))
    {
        if (n.empty())
        {
            v.push_back(sum);
            sum = 0;
        }
        else
            sum += stoi(n);
    }
    v.push_back(sum);
    sort(v.rbegin(), v.rend());

    ans = v[0] + v[1] + v[2];
    cout << ans;
    return 0;
}