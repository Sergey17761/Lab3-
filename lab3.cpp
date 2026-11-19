#include <iostream>
#include <cmath>
using namespace std;

void task20() {
    cout << "задание 20" << endl;
    int n;
    cout << "введите трёхзначное число: ";
    cin >> n;
    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;
    if (a == b && b == c) {
        cout << "а) да, все цифры одинаковые" << endl;
    } else {
        cout << "а) нет" << endl;
    }
    if (a == b || a == c || b == c) {
        cout << "б) есть одинаковые цифры" << endl;
    } else {
        cout << "б) одинаковых цифр нет" << endl;
    }
}

void task29() {
    cout << "задание 29" << endl;
    int m, n;
    cout << "введите m и n: ";
    cin >> m >> n;
    if (m != n) {
        if (m > n) {
            n = m;
        } else {
            m = n;
        }
    } else {
        m = 0;
        n = 0;
    }
    cout << "m=" << m << " n=" << n << endl;
}

void task33() {
    cout << "задание 33" << endl;
    int a, b, c, k;
    cout << "введите a, b, c: ";
    cin >> a >> b >> c;
    cout << "введите k: ";
    cin >> k;
    if (a % k == 0) {
        cout << "k делитель a" << endl;
    }
    if (b % k == 0) {
        cout << "k делитель b" << endl;
    }
    if (c % k == 0) {
        cout << "k делитель c" << endl;
    }
    if (a % k != 0 && b % k != 0 && c % k != 0) {
        cout << "k не является делителем ни одного числа" << endl;
    }
}

void task65() {
    cout << "задание 65" << endl;
    double x;
    cout << "введите x: ";
    cin >> x;
    double s = sin(x);
    double c = cos(x);
    if (fabs(c) < 0.000001) {
        cout << "tan x не имеет смысла" << endl;
        if (s <= c) {
            cout << "sin x, cos x" << endl;
        } else {
            cout << "cos x, sin x" << endl;
        }
    } else {
        double t = tan(x);
        if (s <= c && c <= t) {
            cout << "sin x, cos x, tan x" << endl;
        } else if (s <= t && t <= c) {
            cout << "sin x, tan x, cos x" << endl;
        } else if (c <= s && s <= t) {
            cout << "cos x, sin x, tan x" << endl;
        } else if (c <= t && t <= s) {
            cout << "cos x, tan x, sin x" << endl;
        } else if (t <= s && s <= c) {
            cout << "tan x, sin x, cos x" << endl;
        } else {
            cout << "tan x, cos x, sin x" << endl;
        }
    }
}

void task72() {
    cout << "задание 72" << endl;
    int a, b;
    cout << "введите A и B: ";
    cin >> a >> b;
    int s = a + b;
    if (s > 32767) {
        cout << "переполнение!" << endl;
    } else {
        cout << "сумма=" << s << endl;
    }
}

void task83() {
    cout << "задание 83" << endl;
    double a, b, c;
    cout << "введите a, b, c: ";
    cin >> a >> b >> c;
    if (a == b || a == c || b == c) {
        cout << "есть равная пара" << endl;
    } else {
        cout << "равных нет" << endl;
    }
}

void task86() {
    cout << "задание 86" << endl;
    double a, b, c;
    cout << "введите рост трёх человек: ";
    cin >> a >> b >> c;
    if (a == b && b == c) {
        cout << "рост одинаковый" << endl;
    } else {
        cout << "рост разный" << endl;
    }
}

void task90() {
    cout << "задание 90" << endl;
    double a, b, c, x, y;
    cout << "введите a, b, c (рёбра кирпича): ";
    cin >> a >> b >> c;
    cout << "введите x, y (отверстие): ";
    cin >> x >> y;
    double p, q;
    if (a >= b && a >= c) {
        p = b;
        q = c;
    } else if (b >= a && b >= c) {
        p = a;
        q = c;
    } else {
        p = a;
        q = b;
    }
    if ((p < x && q < y) || (p < y && q < x)) {
        cout << "кирпич пройдёт" << endl;
    } else {
        cout << "кирпич не пройдёт" << endl;
    }
}

void task94() {
    cout << "задание 94" << endl;
    int n;
    cout << "введите шестизначное число: ";
    cin >> n;
    int s1 = n / 100000 + n / 10000 % 10 + n / 1000 % 10;
    int s2 = n / 100 % 10 + n / 10 % 10 + n % 10;
    if (s1 == s2) {
        cout << "счастливое" << endl;
    } else {
        cout << "не счастливое" << endl;
    }
}

void task109() {
    cout << "задание 109" << endl;
    int a, b, c;
    cout << "введите три разных целых числа: ";
    cin >> a >> b >> c;
    if (a > b && a > c) {
        cout << "а) наибольшее - первое" << endl;
    } else if (b > a && b > c) {
        cout << "а) наибольшее - второе" << endl;
    } else {
        cout << "а) наибольшее - третье" << endl;
    }
    if (a < b && a < c) {
        cout << "б) наименьшее - первое" << endl;
    } else if (b < a && b < c) {
        cout << "б) наименьшее - второе" << endl;
    } else {
        cout << "б) наименьшее - третье" << endl;
    }
    if ((a > b && a < c) || (a > c && a < b)) {
        cout << "в) среднее - первое" << endl;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        cout << "в) среднее - второе" << endl;
    } else {
        cout << "в) среднее - третье" << endl;
    }
}

int main() {
    task20();
    task29();
    task33();
    task65();
    task72();
    task83();
    task86();
    task90();
    task94();
    task109();
    return 0;
}
