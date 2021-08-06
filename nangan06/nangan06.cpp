
#include <iostream>
using namespace std;

void out (double a, double b, char c)
{
    double a1 = 0, b1 = b;
    int i = 1;
    if (c != '%') {
        switch (c) {
        case'+':
            a1 = a + b;
            break;
        case'-':
            a1 = a - b;
            break;
        case'*':
            a1 = a * b;
            break;
        case'/':
            a1 = a / b;
            break;
        }
    }
    else {
        if (a > b) {
            while (a > b) {
                i++;
                b = b * i;
            }
            if (i == 2) {
                b = b1 * (i - 1.0);
            }
            else {
                b = b1 * i;
            }
            a1 = a - b;
        }
        else if (a < b) {
            a1 = a;
        }
    }
    cout << a1;
}

int factorial(int a)
{
    int i, a2 = 1;
    for (i = 1; a >= i; i++) {
        a2 = i * a2;
    }
    return a2;
}


int main()
{
    double a, b;
    char c;

    do {
        cin >> a >> c;
        if (c == '!') {
            cout << factorial(a);
        }
        else
        {
            cin >> b;
            out(a, b, c);
        }
    } while (c != 'e');
    return 0;
}
