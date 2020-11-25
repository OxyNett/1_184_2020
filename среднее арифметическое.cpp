


#include <iostream>
#include <math.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
    double  G = 0;
	cout << "Введите четыре числа:: ";
	cin >> a >> b >> c >> d;
	G = (a + b + c + d) / 4;
	cout << G << endl;
	return 0;
}
