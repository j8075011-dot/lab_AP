#include <iostream>
using namespace std;

int main() {
    double d1, d2, area;

    cout << "Enter diagonal d1: ";
    cin >> d1;

    cout << "Enter diagonal d2: ";
    cin >> d2;

    area = (d1 * d2) / 2.0;

    cout << "Area of the rhombus: " << area << endl;

    return 0;
}