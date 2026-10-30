
#include <iostream>
using namespace std;
int main() {
    int n; // Додатне тризначне число
    cout << "Введіть тризначне число: ";
    cin >> n;
   int a = n / 100; // Сотні
 int b = (n / 10) % 10; // Десятки
  int c = n % 10; // Одиниці
  // Порівнюємо всі три пари цифр
 bool result = (a != b) && (a != c) && (b != c);
  cout << boolalpha << result << endl;
  return 0;
}