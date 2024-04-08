#include <bits/stdc++.h>
using namespace std;

string encryptAutokey(const string &plaintext, const int &key)
{
    string ciphertext = "";
    int keyIndex = key;

    for (char ch : plaintext)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            char encryptedChar = ((ch - base + keyIndex) % 26) + base;
            ciphertext += encryptedChar;
            keyIndex = ch - base;
        }
        else
        {
            ciphertext += ch;
        }
    }

    return ciphertext;
}

string decryptAutokey(const string &ciphertext, const int &key)
{
    string decryptedText = "";
    int keyIndex = key;

    for (char ch : ciphertext)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            char decryptedChar = ((ch - base - keyIndex) % 26) + base;
            decryptedText += decryptedChar;
            keyIndex = ch - base;
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

    int key;

    cout << "Enter the plaintext: ";
    getline(cin, plaintext);

    cout << "Enter the key: ";
    cin >> key;

    string ciphertext = encryptAutokey(plaintext, key);
    string decryptedText = decryptAutokey(ciphertext, key);

    cout << "\nCiphertext: " << ciphertext << endl;
    cout << "Decrypted Text: " << decryptedText << endl;

    return 0;
}
