#include "bits/stdc++.h"
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
	for (int i = 0; i < n-1; ++i)
		{
			for (int j = i; j < n; ++j)
			{
				if (a[j]<a[i])
				{
					int temp = a[j];
					a[j] = a[i];
					a[i] = temp;
				}
			}
		}
		for (int i = 0; i < n; ++i)
			{
				cout<<a[i]<<" ";
			}	
	return 0;
}