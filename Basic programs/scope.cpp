#include<iostream>
#include<stdio.h>
using namespace std;

int g=25;
void disp()
{
    cout<<"Sum mein g "<<g<<endl;
}
int main(){
    int g =10;
    cout<<"main mein g "<<g<<endl;
    disp();
    ::g += g;  
    cout << "main mein g global wala " << ::g << endl;
    return 0;
} 