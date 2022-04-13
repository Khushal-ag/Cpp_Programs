#include<bits/stdc++.h>
#define pb push_back
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	int n;
	cin >> n;
	int d = 0;
	if (n >= 100) {
		d += n / 100;
		n = n % 100;
	}
	if (n >= 20) {
		d += n / 20;
		n = n % 20;
	}

	if (n >= 10) {
		d += n / 10;
		n = n % 10;
	}
	if (n >= 5) {
		d += n / 5;
		n = n % 5;
	}

	if (n >= 1) {
		d += n / 1;
		n = n % 1;
	}
	cout << d;
	return 0;
}