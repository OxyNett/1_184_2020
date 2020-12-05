#include <iostream>
#include <cstring>
using namespace std;

class Pig 
{
private:
	string name;
	int age;
	int weight;
	int salo;

public:
	Pig(string name, int age, int weight, int salo)
	{
		this->name = name;
		this->age = age;
		this->weight = weight;
		this->salo = salo;
	}

	void SetAge()
	{
		if (age >= 0 && age < 25)
		{
			this->age = age;
		}
	}

	void Display()
	{
		cout << "Pig " << name << endl;
		cout << "Name of Pig: " << name << endl << "Age of Pig: " << age << endl << "Weight of Pig: " << weight << endl;
		cout << "Get salo..." << endl << "The END!" << endl;
	}

	~Pig()
	{
	}

};

int main()
{
	Pig Napoleon("Napoleon", 15, 250, 40);
	Napoleon.Display();
	Pig David("David", 16, 274, 45);
	David.Display();

	return 0;
}