#include <bits/stdc++.h>

using namespace std;

// Function to calculate pow(a, b) % n using modular exponentiation
int power(int a, unsigned int b, int n)
{
    int result = 1;
    a = a % n; // Update 'a' if 'a' is greater than or equal to 'n'

    while (b > 0)
    {
        // If 'b' is odd, multiply 'result' with 'a' and take modulo with 'n'
        if (b & 1)
            result = (result * a) % n;

        // 'b' must be even now, divide it by 2
        b = b >> 1;
        a = (a * a) % n; // Update 'a' to be its square modulo 'n'
    }
    return result;
}

// Function to encrypt the plaintext using Fermat cipher
string fermatEncrypt(const string &plaintext, int key)
{
    string ciphertext = "";
    for (char c : plaintext)
    {
        if (c != ' ')
        {
            // Apply Fermat cipher formula: C = P^key % 128
            ciphertext += to_string(power(c, key, 128));
            ciphertext += " ";
        }
    }
    return ciphertext;
}

// Function to decrypt the ciphertext using Fermat cipher
string fermatDecrypt(const string &ciphertext, int key)
{
    string plaintext = "";
    string num = "";
    for (char c : ciphertext)
    {
        if (c != ' ')
        {
            num += c;
        }
        else
        {
            int encrypted = stoi(num);
            // Apply Fermat cipher decryption formula: P = C^(key^-1) % 128
            char decrypted = power(encrypted, key, 128);
            plaintext += decrypted;
            num = "";
        }
    }
    return plaintext;
}

int main()
{
    string plaintext;
    int key;

    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    cout << "Enter key: ";
    cin >> key;

    string ciphertext = fermatEncrypt(plaintext, key);
    cout << "Ciphertext: " << ciphertext << endl;

    // Decryption
    string decryptedText = fermatDecrypt(ciphertext, key);
    cout << "Decrypted plaintext: " << decryptedText << endl;

    return 0;
}
