#include <iostream>
using namespace std;

double out(double a, double b, char c)
{
    double a1 = 0, b1 = b;
    int i = 1;
    if (c != '%') {
        switch (c) {
        case'+':
            a = a + b;
            break;
        case'-':
            a = a - b;
            break;
        case'*':
            a = a * b;
            break;
        case'/':
            a = a / b;
            break;
        }
    }
    return a;
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
    double a;
    double b;
    char c;

    do {
        cin >> a >> c;
        if (c == '!') {
            cout << factorial(a);
        }
        else
        {
            cin >> b;
            while (1) {
                a = out(a, b, c);
                cin >> c;
                if (c != '=') {
                    cin >> b;
                }
                else {
                    break;
                }
            }
            cout << a;
        }
    } while (c != 'e');
    return 0;
}