#include <bits/stdc++.h>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i = i + 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}

// Function to calculate gcd of two numbers
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to generate public and private keys
void generateKeys(int p, int q, int &n, int &e, int &d)
{
    if (!isPrime(p) || !isPrime(q))
    {
        cerr << "Both p and q must be prime numbers." << endl;
        exit(1);
    }

    n = p * q;
    int phi = (p - 1) * (q - 1);

    // Choose e such that 1 < e < phi and e is coprime to phi
    for (e = 2; e < phi; e++)
    {
        if (gcd(e, phi) == 1)
            break;
    }

    // Calculate d, the modular multiplicative inverse of e (mod phi)
    for (d = 2; d < phi; d++)
    {
        if ((e * d) % phi == 1)
            break;
    }
}

// Function to perform modular exponentiation
int power(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

// Function to encrypt plaintext using RSA algorithm
string rsaEncrypt(const string &plaintext, int e, int n)
{
    string ciphertext = "";
    for (char c : plaintext)
    {
        int encrypted = power(c, e, n);
        ciphertext += to_string(encrypted);
        ciphertext += " ";
    }
    return ciphertext;
}

// Function to decrypt ciphertext using RSA algorithm
string rsaDecrypt(const string &ciphertext, int d, int n)
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
            int decrypted = power(encrypted, d, n);
            plaintext += char(decrypted);
            num = "";
        }
    }
    return plaintext;
}

int main()
{
    int p, q, n, e, d;
    string plaintext, ciphertext, decryptedText;

    cout << "Enter two prime numbers (p and q): ";
    cin >> p >> q;

    generateKeys(p, q, n, e, d);
    cout << "Public Key (e, n): (" << e << ", " << n << ")" << endl;
    cout << "Private Key (d, n): (" << d << ", " << n << ")" << endl;

    cin.ignore(); // Ignore newline character left in the buffer
    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    // Encryption
    ciphertext = rsaEncrypt(plaintext, e, n);
    cout << "Ciphertext: " << ciphertext << endl;

    // Decryption
    decryptedText = rsaDecrypt(ciphertext, d, n);
    cout << "Decrypted plaintext: " << decryptedText << endl;

    return 0;
}
