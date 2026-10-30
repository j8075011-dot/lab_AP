#include <iostream>
#include <cmath>  // Бібліотека для sqrt()
using namespace std;
int main ()
{
// Задача Begin48: середнє геометричне двох чисел
double a, b, G;

cout << "Begin48 - Geometric mean\n";

cout << "Enter non-negative number a: ";
cin >> a;

cout << "Enter non-negative number b: ";

cin >> b;

// Обчислення середнього геометричного
G = sqrt(a * b);

// Виведення результату
cout << "Geometric mean: " << G << "\n\n";
  return 0;
}
