#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int c, g, H;
		cin >> g >> c;
		H = (c * c) / (2 * g);
		cout << H << endl;
	}
	return 0;
}
