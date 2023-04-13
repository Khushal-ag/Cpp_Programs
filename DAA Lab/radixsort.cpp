#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    int m = INT_MIN;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m = max(m, v[i]);
    }
    int exp = 1;
    while (m / exp > 0)
    {
        vector<int> count(10, 0);
        for (int i = 0; i < n; i++)
        {
            count[(v[i] / exp) % 10]++;
        }
        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }
        vector<int> output(n);
        for (int i = n - 1; i >= 0; i--)
        {
            output[count[(v[i] / exp) % 10] - 1] = v[i];
            count[(v[i] / exp) % 10]--;
        }
        for (int i = 0; i < n; i++)
        {
            v[i] = output[i];
        }
        exp *= 10;
    }
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}

// Time complexity
// Best case : O(nk)
// Average case : O(nk)
// Worst case : O(nk)
