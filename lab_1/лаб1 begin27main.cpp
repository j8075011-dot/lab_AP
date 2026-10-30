#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Задача Begin27: відстань між автомобілями
    double V1, V2, S, T, D;

    cout << "Begin27 - Distance between cars\n";
    cout << "Enter speed V1 (km/h): ";
    cin >> V1;

    cout << "Enter speed V2 (km/h): ";
    cin >> V2;

    cout << "Enter initial distance S (km): ";
    cin >> S;

    cout << "Enter time T (hours): ";
    cin >> T;

    // Обчислення відстані між автомобілями
    D = S + (V1 + V2) * T;

    // Виведення результату
    cout << "Distance after T hours: " << D << " km\n";

    return 0;
}