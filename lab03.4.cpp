// Lab_03_4.cpp
// < ���������, ����� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 10

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
        cout << "����� ����������� � ����� ������ ������." << endl;

    else cout << "����� �� ����������� � ����� ������ ������." << endl;

    cin.get();

    return 0;
}