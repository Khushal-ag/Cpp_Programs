#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int bin_to_dec(long long int n)
{
    int dec=0,p=0;
    while(n>0)
    {
        dec += (n%10)*pow(2,p);
        n /= 10;
        p++;
    }
    return dec;
}
int oct_to_dec(int n)
{

    int oct = 0, p = 0;
    while (n > 0)
    {
        oct += (n % 10) * pow(8, p);
        n /= 10;
        p++;
    }
    return oct;
}
int hex_to_dec(string n)
{
    int hex=0,p=0;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            hex += (n[i]-'0')*pow(16,p);
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            hex += (n[i] - 'A' + 10)*pow(16,p);
        }
        p++;
    }
    return hex;
} 
int main()
{
    int n1,n2;
    string n3;
    cout<<"Enter a binary number = ";
    cin>>n1;
    cout<<"Decimal -> "<<bin_to_dec(n1)<<endl;
    cout << "Enter a octal number = ";
    cin >> n2;
    cout << "Decimal -> " << oct_to_dec(n2) << endl;
    cout << "Enter a hexadecimal number = ";
    cin >> n3;
    cout << "Decimal -> " << hex_to_dec(n3) << endl;
    return 0;
}