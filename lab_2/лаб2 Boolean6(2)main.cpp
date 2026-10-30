#include <iostream>
using namespace std;

int main() {
    int A, B, C; // Три цілі числа
    cout << "Введіть A, B, C: ";
    cin >> A >> B >> C;

    // Обидві нерівності мають бути істинними одночасно
    bool result = (A < B) && (B < C);
    cout << boolalpha << result << endl; // true або false
    return 0;
}