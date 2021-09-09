#include <iostream>
using namespace std;

int a[9][9];

void box(int i, int j) {
	int k = i/3*3, l = j/3*3;
	int b[9] = { 0 };
	int z = k, x = l;
	for (k = i / 3 * 3; k < z + 3; k++) {
		for (l = j / 3 * 3; l < x + 3; l++) {
			if (a[k][l] != 0) {
				b[a[k][l] - 1] = a[k][l];
			}
		}
	}

	for (k = 0; k < 9; k++) {
		if (b[k] == 0) {
			a[i][j] = k + 1;
			return;
		}
	}
	return;
}

void paint1(int i, int j) {
	int k;
	int b[9] = { 0 };

	for (k = 0; k < 9; k++) {
		b[a[i][k] - 1] = a[i][k];
	}

	for (k = 0; k < 9; k++) {
		b[a[k][j] - 1] = a[k][j];
	}

	for (k = 0; k < 9; k++) {
		if (b[k] == 0) {
			a[i][j] = k + 1;
			return;
		}
	}
	return;
}

void paint2(int i, int j) {
	int k;
	int b[9] = { 0 };

	for (k = 0; k < 9; k++) {
		b[a[i][k] - 1] = a[i][k];
	}

	for (k = 0; k < 9; k++) {
		b[a[k][j] - 1] = a[k][j];
	}

	for (k = 0; k < 9; k++) {
		if (b[k] == 0) {
			a[j][i] = k + 1;
			return;
		}
	}
	return;
}

int main()
{
	int i, j, k = 0, b[10] = { 0 }, c[10] = { 0 };

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cin >> a[i][j];
		} 
	}

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			if (a[i][j] == 0) {
				box(i, j);
			}
		}
	}
	

	
	for (i = 0; i < 9; i++) {
		for (j = 0;j < 9; j++) {
			if (b[a[i][j]] == a[i][j]) {
				paint1(i, j);
			}
			else {

				b[a[i][j]] = a[i][j];
				
			}
		}
		for (k = 0; k < 10; k++) {
			b[k] = 0;
		}
	}

	for (k = 0; k < 10; k++) {
		b[k] = 0;
	}


	
	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9; i++) {
			if (b[a[i][j]] == a[i][j]) {
				paint2(i, j);
			}
			else {

				b[a[i][j]] = a[i][j];

			}
		}
		for (k = 0; k < 10; k++) {
			b[k] = 0;
		}
	}

	for (k = 0; k < 10; k++) {
		b[k] = 0;
	}

	cout << '\n';
	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			cout << a[i][j] << ' ';
		}
		cout << '\n';
	}


	return 0;
}
