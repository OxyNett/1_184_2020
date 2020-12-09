#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int A = 0;
	char Rr;

	cout << "A: ";
	cin >> A;
	if (A % 3 == 0)
	{
		Rr = 'a';
	}
	else if (A % 4 == 0)
	{
		Rr = 'b';
	}
	else if (A % 5 == 0)
	{
		Rr = 'c';
	}

	switch (Rr)
	{
	case 'a':
		cout << "Число Кратно 3" << endl;
		break;
	case 'b':
		cout << "Число Кратко 4" << endl;
		break;
	case 'c':
		cout << A + 7 << endl;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
