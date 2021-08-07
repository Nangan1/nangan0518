// nangan06.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

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

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

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
