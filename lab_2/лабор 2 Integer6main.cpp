
#include <iostream> // Бібліотека введення та виведення
using namespace std;

int main() {
    int n; // Двозначне число
    cout << "Введіть двозначне число: ";
    cin >> n; // Зчитуємо число

    int tens = n / 10; // Десятки: цілочисельне ділення
    int units = n % 10; // Одиниці: остача від ділення

    cout << "Десятки: " << tens << endl;
    cout << "Одиниці: " << units << endl;
    return 0; // Успішне завершення програми
}