// Лабораторная работа на вычисление функции.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

float TaskOne(float x)
{
	return ((pow(sin(x), 3) + pow(cos(x), 3)) * log(x)));
}

int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Задание 1: " << endl;
	for (float x = 0; x < 0.36; x += 0.05)
	{
		cout << TaskOne(x) << endl;
	}
	cout << "Задание 2: " << endl;
	cout << TaskOne(0.2) << endl << TaskOne(0.3) << endl << TaskOne(0.38) << endl << TaskOne(0.43) << endl << TaskOne(0.43);
}
