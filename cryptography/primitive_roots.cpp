#include <bits/stdc++.h>

using namespace std;

// Function to calculate gcd of two numbers
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate φ(n) - Euler's totient function
int totient(int n)
{
    int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}

// Function to calculate powers modulo n
int power(int x, int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y % 2 == 1)
            res = (res * x) % p;
        y = y / 2;
        x = (x * x) % p;
    }
    return res;
}

// Function to check if a is a primitive root of n
bool isPrimitiveRoot(int a, int n)
{
    if (n == 2)
        return true; // Special case for n = 2
    int phi = totient(n);
    for (int i = 2; i < phi; i++)
        if (power(a, i, n) == 1)
            return false;
    return true;
}

int main()
{
    string input;
    while (true)
    {
        cout << "Enter a number to find its primitive roots (or 'e' to exit): ";
        getline(cin, input);
        if (input == "e")
        {
            break;
        }
        try
        {
            int number = stoi(input);
            int phi = totient(number);
            cout << "φ(" << number << ") = " << phi << endl;
            cout << "Primitive roots of " << number << ": ";
            if (number == 2)
            {
                cout << 1 << endl; // Special case for n = 2
            }
            else
            {
                bool foundPrimitiveRoot = false;
                for (int a = 2; a < number; a++)
                {
                    if (gcd(a, number) == 1 && isPrimitiveRoot(a, number))
                    {
                        cout << a << " ";
                        foundPrimitiveRoot = true;
                    }
                }
                if (!foundPrimitiveRoot)
                    cout << "none";
                cout << endl;
            }
        }
        catch (invalid_argument &e)
        {
            cout << "Invalid input. Please enter a valid number or 'e' to exit." << endl;
        }
    }
    return 0;
}
