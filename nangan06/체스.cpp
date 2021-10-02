#include <iostream>
using namespace std;

char a[8][8] = { 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r' };

class pawn {
private:
	int x, y, z[2][8] = { 0 }, t, zt;

public:
	pawn(int q, int w, int turn) {
		x = q;
		y = w;
		t = turn;
		if (turn < 0)
			zt = 0;
		else
			zt = 1;
	}

	bool check() {
		if (a[y][x] == 0) {
				if (a[y + t][x] == 'p') {
					return true;
				}
				else if (a[y + t*2][x] == 'p' && z[zt][x - 1] == 0) {
					z[0][x - 1] = 1;
					return true;
				}
			}
			return false;
	}
	void move() {
		if (t < 0)
			a[y][x] == 'p';
		else
			a[y][x] == 'P';
		if (z[zt][x - 1] == 1) {
			a[y + 2 * t][x] = 0;
			z[zt][x - 1] == 2;
		}
		else
			a[y + t][x] = 0;
	}
	void promotion(char a) {

	}
	void destroy() {

	}
};



int main() {
	char x, s, d;
	int i, j, y, turn = 0, t;
	bool w = false;

	while (w != true) {
		cin >> s >> d;
		if (s > 60) {
			x = s;
			s = 0;
			if (d != 'x') {
				y = d - 48;
			}
			else {
				cin >> y;
			}
		}
		else {
			if (d != 'x') {
				x = d;
			}
			else {
				cin >> x >> y;
			}
		}
		if (turn % 2 != 0)
			t = -1;
		else
			t = 1;
		switch (s) {
		case 0:
			pawn p(x - 48, y, t);
			if (false == p.check())
				continue;
			else {
				p.move();
			}
		case 'k':

		case 'q':

		case 'b':
			
		case 'n':

		case 'r':
		}
		turn++;
	}

	return 0;
}