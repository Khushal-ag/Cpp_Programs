#include <bits/stdc++.h>
using namespace std;

int inverseModulo(int a, int m)
{
    a = a % m;
    for (int x = 1; x < m; x++)
    {
        if ((a * x) % m == 1)
        {
            return x;
        }
    }
    return -1; // Inverse does not exist
}

// Function to check if a key works for all characters in the plaintext and ciphertext
bool isValidKey(const string &plaintext, const 
string &ciphertext, int key)
{
    for (int i = 0; i < plaintext.length(); ++i)
    {
        if (isalpha(plaintext[i]) && isalpha(ciphertext[i]))
        {
            char baseP = isupper(plaintext[i]) ? 'A' : 'a';
            char baseC = isupper(ciphertext[i]) ? 'A' : 'a';

            int decryptedChar = ((ciphertext[i] - baseC) * inverseModulo(key, 26)) % 26 + baseP;

            if (decryptedChar < baseP)
            {
                decryptedChar += 26;
            }

            if (decryptedChar != plaintext[i])
            {
                return false;
            }
        }
    }

    return true;
}

string encrypt(const string &plaintext, int key)
{
    string ciphertext = "";

    for (char ch : plaintext)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            ciphertext += (char)(((ch - base) * key) % 26 + base);
        }
        else
        {
            ciphertext += ch;
        }
    }

    return ciphertext;
}

string decrypt(const string &ciphertext, int key)
{
    int inverseKey = 0;
    for (int i = 1; i < 26; ++i)
    {
        if ((key * i) % 26 == 1)
        {
            inverseKey = i;
            break;
        }
    }

    string plaintext = "";

    for (char ch : ciphertext)
    {
        if (isalpha(ch))
        {
            char base = isupper(ch) ? 'A' : 'a';
            plaintext += (char)(((ch - base) * inverseKey) % 26 + base);
        }
        else
        {
            plaintext += ch;
        }
    }

    return plaintext;
}

int keyFind(const string &ciphertext, const string &plaintext)
{
    int key = -1;

    for (int i = 0; i < plaintext.length(); ++i)
    {
        if (isalpha(plaintext[i]) && isalpha(ciphertext[i]))
        {
            char baseP = isupper(plaintext[i]) ? 'A' : 'a';
            char baseC = isupper(ciphertext[i]) ? 'A' : 'a';

            int keyCandidate = ((ciphertext[i] - baseC) * inverseModulo(plaintext[i] - baseP, 26)) % 26;

            // Ensure the key is positive
            if (keyCandidate < 0)
            {
                keyCandidate += 26;
            }

            // Check if the key works for all characters
            if (isValidKey(plaintext, ciphertext, keyCandidate))
            {
                key = keyCandidate;
                break;
            }
        }
    }

    return key;
}

int main()
{
    string plaintext, ciphertext, decryptedText;
    int key;

    cout << "Menu : \n1. Encrypt\n2. Decrypt\n3. Find key\n";
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the plaintext: ";
        cin.ignore();
        getline(cin, plaintext);
        cout << "Enter the key (an integer coprime to 26): ";
        cin >> key;
        ciphertext = encrypt(plaintext, key);
        cout << "Encrypted text: " << ciphertext << endl;
        break;
    case 2:
        cout << "Enter the ciphertext: ";
        cin.ignore();
        getline(cin, ciphertext);
        cout << "Enter the key (an integer coprime to 26): ";
        cin >> key;
        decryptedText = decrypt(ciphertext, key);
        cout << "Decrypted text: " << decryptedText << endl;
        break;
    case 3:
        cout << "Enter the ciphertext: ";
        cin.ignore();
        getline(cin, ciphertext);
        cout << "Enter the plaintext: ";
        cin.ignore();
        getline(cin, plaintext);
        key = keyFind(ciphertext, plaintext);
        cout << "Key: " << key << endl;
        break;
    default:
        cout << "Invalid choice\n";
        break;
    }

    return 0;
}
