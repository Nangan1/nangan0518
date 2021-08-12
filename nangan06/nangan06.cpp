#include <iostream>
using namespace std;

class calc {

public:
    double result;
    
    double add(double a) {
        result += a;
        return result;
    }
    double sub(double a) {
        result -= a;
        return result;
    }
    double mul(double a) {
        result *= a;
        return result;
    }
    double div(double a) {
        result /= a;
        return result;
    }
};

int main()
{
    calc calc;
    double a = 0, b;
    char c;
    while (true) {
        c = 0;
        cin >> a;
        calc.result = (a);
        while (true) {
            cin >> c;
            if (c == 'c') {
                break;
            }
            if (c == '=') {
                cout << a;
                continue;
            }
            if (c == 'e') {
                return 0;
            }
            cin >> b;
            switch (c) {
            case '+':
                a = calc.add(b);
                break;
            case '-':
                a = calc.sub(b);
                break;
            case '*':
                a = calc.mul(b);
                break;
            case '/':
                a = calc.div(b);
                break;
            }
        }

    }
    return 0;
}