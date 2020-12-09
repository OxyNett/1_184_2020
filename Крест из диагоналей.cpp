#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int a = 0;
	cout << "Введите размер Креста: ";
	cin >> a;
	for (int i = 1; i < a; i++)
	{
		for (int j = 1; j < a; j++)
		{
			if (i == j || i + j == a)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;



}