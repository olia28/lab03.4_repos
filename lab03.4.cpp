// Lab_03_4.cpp
// < Кліщевська, Ольга >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, a, b, R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "R = "; cin >> R;

    if ((x <= a && y >= (sqrt(abs(pow(R, 2) - pow(x, 2)))) && y <= b) ||
        (x >= (-sqrt(abs(pow(R, 2) - pow(y, 2)))) && x <= 0 && y >= -b && y <= 0))
        cout << "Точка знаходиться в межах заданої фігури." << endl;

    else cout << "Точка не знаходиться в межах заданої фігури." << endl;

    cin.get();

    return 0;
}