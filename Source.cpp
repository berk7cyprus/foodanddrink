
#include <iostream>
#include "food_and_drink.h"
#include <string>
using namespace std;

int main()
{
	string name; // defines  string for the name of the character
	int eatdrink;
	string food;// defines  string for the food of the character
	int item;

	cout << "Please enter  name" << endl;// asks user to enter name
	cin >> name;

	cout << "Please enter your  number of item have consumed" << endl;//consumed items
	cin >> item;

	cout << "are you  eating or drinking? Enter 1 for eating and 2 for drinking" << endl;//options to choose
	cin >> eatdrink;

	if (eatdrink == 1)//if condition
	{
		food = GetRandomFoodItem();
		cout << name << " eats " << item << food << endl;//option to eat
	}
	else if (eatdrink == 2)
	{

		food = GetRandomDrinkItem();
		cout << name << " drinks " << item << food << endl;//option to drink
	}
	system("pause");//avoiding errors
	return 0;
}
