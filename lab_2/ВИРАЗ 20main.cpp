#include <iostream>
#include <cmath> // exp, sin, sqrt, log, pow
using namespace std;

int main() {
    double x; // Вхідне число
    const double pi = acos(-1.0); // Число пі
    cout << "Введіть x: ";
    cin >> x;

    // Аргумент синуса: кут 127° плюс 2x (у градусах)
    double angle = (127 + 2 * x) * pi / 180.0;
    double numerator = 2 * pow(3.0, x - 2)
        * sqrt(exp(2 * x) * abs(sin(angle)));

    // log_3(|x|) = ln(|x|) / ln(3)
    double arg = abs(x);
    if (arg <= 0 || abs(arg - 1) < 1e-12) {
        cout << "Помилка: логарифм або знаменник";
        return 1;
    }
    double denominator = log(arg) / log(3.0);
    cout << "y = " << numerator / denominator << endl;
    return 0;
}