#include <iostream>
#include "func1.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout.precision(4);

	Nemanova::f();
	cout << "�������� x = " << x << "; " << endl;
	cout << "�������� ������� ��� �������� x: f = " << result << "; " << endl;

	cout << "������� �:";
	cin >> x;
	Nemanova::f();
	cout << "�������� ������� ��� �������� x: f = " << result << "; " << endl;
}