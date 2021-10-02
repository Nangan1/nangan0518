#include <iostream>

using namespace std;

class dice
{
private:
    int top, d[6], k = 0, q[4], w[4], i;
    // TODO

public:
    dice(int a[][3])
    {
        for (i = 0; i < 4; i++) {
            q[i] = a[i][1];
        }
        for (i = 0; i < 3; i++) {
            w[i] = a[1][i];
        }
        w[3] = a[3][1];

        // TODO
    }
    void lr()
    {
        q[1] = w[1];
        q[3] = w[3];
        top = q[1];
    }
    void ud()
    {
        w[1] = q[1];
        w[3] = q[3];
        top = q[1];
    }
    void left()
    {
        k = w[0];
        for (i = 0; i < 3; i++) {
            w[i] = w[i + 1];
        }
        w[3] = k;
        lr();
        // TODO
        cout << top << ' ';
    }

    void right()
    {
        k = w[3];
        for (i = 3; i > 0; i--) {
            w[i] = w[i - 1];
        }
        w[0] = k;
        lr();
        // TODO
        cout << top << ' ';

    }

    void up()
    {
        k = q[0];
        for (i = 0; i < 3; i++) {
            q[i] = q[i + 1];
        }
        q[3] = k;
        ud();
        // TODO
        cout << top << ' ';

    }

    void down()
    {
        k = q[3];
        for (i = 3; i > 0; i--) {
            q[i] = q[i - 1];
        }
        q[0] = k;
        ud();
        // TODO
        cout << top << ' ';

    }
};

int main()
{
    int a[4][3];
    string b;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    cin >> b;

    dice d(a);

    for (size_t i = 0; i < b.length(); i++)
    {
        if (b[i] == 'L')
            d.left();
        else if (b[i] == 'R')
            d.right();
        else if (b[i] == 'U')
            d.up();
        else if (b[i] == 'D')
            d.down();
        else
            cout << "";

    }

    return 0;
}