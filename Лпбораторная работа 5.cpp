#include <iostream>
#include <math.h>
using namespace std;

double TaskOne(double x)
{
	return ((sin(x) / (log(pow(x, 2)))) + (cos(x) / log(fabs(x))));
}

double TaskTwo(int i, double x)
{
	double P = 0;
	for (int i = 3; i < 17; i += 2)
	{
		P = P + (sin(i * 3.14 * x) / (i * sqrt(x);
	}
}

int main()
{
	cout << "TaskOne" << endl;
	for (double x = 2; x < 3; x += 0.1)
	{
		cout << TaskOne(x) << endl;
	}
	cout << "TaskTwo" << endl;
	double x;
	cout << "x: "; cin >> x;
	TaskTwo(3, x);

	return 0;
}