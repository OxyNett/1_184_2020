#include <iostream>
using namespace std;

void Buble(long[], long);
void Display(long[], long);
void Random(long[], long);

int main()
{

	int const x = 100;
	int size;
	cout << "Size: "; cin >> size;
	long a[x];

	Random(a, size);
	Buble(a, size);
}
void Buble(long a[], long size)
{
	long i;
	long j;
	long x;
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			if ((a[j - 1]) > (a[j]))
			{
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
}

void Random(long a[], long size)
{
	for (int i = 0; i < size; i++)
	{
		a[i] = 1.0 + 9 * rand() / (int)RAND_MAX;
	}
}

void Display(long a[], long size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i];
	}
}