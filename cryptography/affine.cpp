#include <bits/stdc++.h>
using namespace std;

int modInverse(int a, int m)
{
    for (int i = 0; i < m; i++)
    {
        if ((a * i) % m == 1)
        {
            return i;
        }
    }
    return -1; // If the inverse doesn't exist
}

string encryptAffine(const string &plaintext, int a, int b)
{
    string ciphertext = "";

    for (char ch : plaintext)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            char encryptedChar = ((a * (ch - base) + b) % 26) + base;
            ciphertext += encryptedChar;
        }
        else
        {
            ciphertext += ch;
        }
    }

    return ciphertext;
}

string decryptAffine(const string &ciphertext, int a, int b)
{
    string decryptedText = "";
    int aInverse = modInverse(a, 26);

    if (aInverse == -1)
    {
        cerr << "Invalid key: Modular inverse does not exist for the given 'a' value." << endl;
        return "";
    }

    for (char ch : ciphertext)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            char decryptedChar = (aInverse * (ch - base - b + 26)) % 26 + base;
            decryptedText += decryptedChar;
        }
        else
        {
            decryptedText += ch;
        }
    }

    return decryptedText;
}

int main()
{
    string plaintext;
    int a, b;

    cout << "Enter the plaintext: ";
    getline(cin, plaintext);

    cout << "Enter the 'a' value (must be coprime with 26): ";
    cin >> a;

    if (a < 0 || a >= 26 || __gcd(a, 26) != 1)
    {
        cerr << "Invalid 'a' value. Please choose a coprime with 26." << endl;
        return 1;
    }

    cout << "Enter the 'b' value: ";
    cin >> b;

    string ciphertext = encryptAffine(plaintext, a, b);
    string decryptedText = decryptAffine(ciphertext, a, b);

    cout << "\nCiphertext: " << ciphertext << endl;
    cout << "Decrypted Text: " << decryptedText << endl;

    return 0;
}
