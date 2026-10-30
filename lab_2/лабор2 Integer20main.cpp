#include <iostream>
using namespace std;
int main() {
int N; // Кількість секунд від початку доби
cout << "Введіть N (секунди): ";
cin >> N;
// Одна година = 3600 секунд; дробову частину відкидаємо
int hours = N / 3600;
cout << "Повних годин: " << hours << endl;
return 0;
}