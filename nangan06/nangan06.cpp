#include <iostream>
using namespace std;

int main()
{
	int a[3], b = 0, i, s;
	for (i = 0; i <= 2; i++)
		cin >> a[i];

	s = a[0];
	a[0] = a[1];
	a[1] = a[2];
	a[2] = s;

	cin >> b;
	for (i = 0; i <= 2; i++) {
		while (a[i] <= b)
			b -= a[i];
	}
	if (b != 0)
		cout << 0;
	else
		cout << 1;
	return 0;
}