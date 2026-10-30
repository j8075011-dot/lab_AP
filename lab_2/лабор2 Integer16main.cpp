#include <iostream>
using namespace std;

int main() {
    int n; // Додатне тризначне число
    cout << "Введіть тризначне число: ";
    cin >> n;

    int hundreds = n / 100; // Цифра сотень
    int tens = (n / 10) % 10; // Цифра десятків
    int units = n % 10; // Цифра одиниць

    // Сотні залишаємо, а десятки та одиниці міняємо місцями
    int result = hundreds * 100 + units * 10 + tens;
    cout << "Нове число: " << result << endl;
    return 0;
}
