﻿/*
У ребенка есть несколько состояний: играть, есть, спать
Состояния приватные.
Мы с ним можем поиграть, покормить, уложить спать.

Мы можем создавать ребенка с различными конфигурациями состояний.
*/
#include <iostream>
#include <cstring>

using namespace std;

class Child
{
private:
	int Age;
	string Name;
	double WhatChildWant; // Переменная, которая в будущем будет использоваться для проверки условий из Display
public:
	Child()
	{
		this->Name = Name;
		this->Age = Age;
	}

	void Display()
	{
		cout << "1 - Child wants eat" << endl << "2 - Child wants play" << endl << "3 - Child wants sleep" << endl << "1.2 - Child wants Eat and Play" << endl << "1.3 - Child wants Eat and Sleep" << endl;
	}

	void Input()
	{
		cout << "What's your child's name? "; cin >> Name; cout << endl;
		cout << "The age of " << Name << "? "; cin >> Age; cout << endl;
	}

	void Compare()
	{
		cout << "What your child wants: Eat, Game or Sleep? " << endl;
		cin >> WhatChildWant;
		if (Age < 6) // Если Ребенку меньше 6 лет, то мы будем выполнять одни действия
		{
			if (WhatChildWant == 1)
			{
				cout << Name << " wants eat, prepare a meal and ask the child what HE/SHE want. " << endl;
			}
			else if (WhatChildWant == 2)
			{
				cout << "plays with " << Name << " or turn on cartoons." << endl;
			}
			else if (WhatChildWant == 3)
			{
				cout << Name << " want sleeps, air out the room and read a story. " << endl;
			}
			else if (WhatChildWant == 1.2)
			{
				cout << Name << " wants eat and plays. Prepare food, you can arrange an interactive game with cooking" << endl;
			}
			else if (WhatChildWant == 1.3)
			{
				cout << Name << " wants eat and sleeps. Urgently prepare a light meal, put the child to bed, read the story" << endl;
			}
			else
			{
				cout << "What " << Name << " wants?" << endl;
			}
		}
		else // Если ребенку больше 6, то мы выполняем действия, связанные с его самостоятельностью
		{
			if (WhatChildWant == 1)
			{
				cout << Name << " want eats, try cooking with " << Name << ", if it works, it's cool! " << endl;
			}
			else if (WhatChildWant == 2)
			{
				cout << "play with " << Name << " or turn on cartoons." << endl;
			}
			else if (WhatChildWant == 3)
			{
				cout << Name << " want sleeps, ventilate the room. Ask if " << Name << " wants a story, and if not, wish him sweet dreams.  " << endl;
			}
			else if (WhatChildWant == 1.2)
			{
				cout << Name << " wants eat and plays. Prepare food, you can arrange an interactive game with cooking" << endl;
			}
			else if (WhatChildWant == 1.3)
			{
				cout << Name << " wants eats and sleeps. Urgently prepare a light meal, put the child to bed, read the story" << endl;
			}
			else
			{
				cout << "What " << Name << " wants?" << endl;
			}
		}
	}

	~Child()
	{
		cout << endl;
	}
};

int main()
{
	Child my_child1;
	my_child1.Display();
	my_child1.Input();
	while (true)
	{
		my_child1.Compare();
	}
	return 0;
}
