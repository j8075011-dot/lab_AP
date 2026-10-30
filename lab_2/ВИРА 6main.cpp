
#include <iostream>
#include <cmath> // sin, tan, cos, pow, log2, abs
using namespace std;

int main() {
    double x; // Вхідне дійсне число (у радіанах)
    cout << "Введіть x: ";
    cin >> x;

    // Чисельник: п'ятий корінь і степінь 2.5
    double base = 2 * x * x - abs(sin(x)) * tan(x);
    double root5 = copysign(pow(abs(base), 1.0 / 5.0), base);
    double numerator = root5 * pow(2.5, cos(x));

    // Знаменник містить двійковий логарифм
    if (x + 7.5 <= 0) {
        cout << "Помилка: аргумент логарифма <= 0";
        return 1;
    }
    double denominator = 0.625 + 2 * log2(x + 7.5);
    if (abs(denominator) < 1e-12) {
        cout << "Помилка: ділення на нуль";
        return 1;
    }

    double y = numerator / denominator;
    cout << "y = " << y << endl;
    return 0;
}