#include <iostream>
using namespace std;

int swap(int a, int b) {
	cout << a << ' ' << b << ' ';
	if (a < b)
		swap(b, a);
	return b, a;
}


int main()
{
	int a = 1;
	int b = 2;
	swap(a, b);
	return 0;
}