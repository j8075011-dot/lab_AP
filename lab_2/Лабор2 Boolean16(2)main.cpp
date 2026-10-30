#include <iostream>
using namespace std;
int main() {
    int n; // Додатне ціле число
    cout << "Введіть число: ";
    cin >> n;
    // Число має дві цифри та ділиться на 2 без остачі
    bool result = (n >= 10 && n <= 99) && (n % 2 == 0);
    cout << boolalpha << result << endl;
    return 0;
}