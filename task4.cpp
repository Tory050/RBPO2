/*#include <iostream>
#include <math.h>

using namespace std;

void f(const double& x, double& f);

void main()
{
	setlocale(LC_ALL, "Russian");
	double x, F;
	cout.precision(4);

	x = 15;
	f(x, F);
	cout << "�������� x = " << x << "; " << endl;
	cout << "�������� ������� ��� �������� x: f = " << F << "; " << endl;

	cout << "������� �:";
	cin >> x;
	f(x, F);
	cout << "�������� ������� ��� �������� x: f = " << F << "; " << endl;
}

void f(const double& x, double& f)
{
	f = (sqrt(pow((3 * x + 2), 2) - 24 * x)) / (3 * sqrt(x) - (2 / sqrt(x)));
}*/