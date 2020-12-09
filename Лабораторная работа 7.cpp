#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void FillArray(double b[], int const size3, int const size4)
{
	srand(time(0));
	for (int i = 0; i < size3; i++)
	{
		b[i] = 1.0 + 9 * rand() / (int)RAND_MAX;
	}
}

int main()
{
	setlocale(LC_ALL, "RU");
	double a[6][8];
	double b[9][9];
	int size1 = 6;
	int size2 = 8;
	int size3 = 9;
	int size4 = 9;
	FillArray(*a, 5, 8);
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (a[i][j]<0)
			{
				cout << "Элемент отрицательный. Адресс: " << i << j << endl;
			}
			else
			{
				cout << "Отрицательный элемент не найден." << endl;
			}
		}
	}
	FillArray(*b, 9, 9);
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (a[i][j] < 0)
			{
				cout << "Элемент отрицательный. Адресс: " << i << j << endl;
			}
			else
			{
				cout << "Отрицательный элемент не найден." << endl;
			}
		}
	}
	return 0;
}