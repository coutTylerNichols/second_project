/*Name: Tyler Nichols
Class: CS 231
Program: The Coin Calculator
This program is meant to calculate total cents by input from user
9/20/20*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Welcome to the Coin Calculator." << endl;

	//Variable Declarations
	float pennies;
	float nickels;
	float dimes;
	float quarters;
	float halfdollars;
	float dollars;
	int penny_am;
	int nickel_am;
	int dime_am;
	int quarter_am;
	int halfdollar_am;
	int dollar_am;
	float total;

	//Variable Assignments
	pennies = 0.01;
	nickels = 0.05;
	dimes = 0.10;
	quarters = 0.25;
	halfdollars = 0.50;
	dollars = 1;


	cout << "Please enter the number of pennies in an amount greater than or equal to zero:";
	cin >> penny_am;
	if (penny_am < 0) {
		cout << "ERROR Please re enter your coin amounts as a number greater than or equal to 0. " << endl;
		return main();
	}

	cout << "Please enter the number of nickels in an amount greater than or equal to zero:";
	cin >> nickel_am;
	if (nickel_am < 0) {
		cout << "ERROR Please re enter your coin amounts as a number greater than or equal to 0. " << endl;
		return main();
	}

	cout << "Please enter the number of dimes in an amount greater than or equal to zero:";
	cin >> dime_am;
	if (dime_am < 0) {
		cout << "ERROR Please re enter your coin amounts as a number greater than or equal to 0. " << endl;
		return main();
	}

	cout << "Please enter the number of quarters in an amount greater than or equal to zero:";
	cin >> quarter_am;
	if (quarter_am < 0) {
		cout << "ERROR Please re enter your coin amounts as a number greater than or equal to 0. " << endl;
		return main();
	}

	cout << "Please enter the number of half dollars in an amount greater than or equal to zero:";
	cin >> halfdollar_am;
	if (halfdollar_am < 0) {
		cout << "ERROR Please re enter your coin amounts as a number greater than or equal to 0. " << endl;
		return main();
	}

	cout << "Please enter the number of dollar coins in an amount greater than or equal to zero:";
	cin >> dollar_am;
	if (dollar_am < 0) {
		cout << "ERROR Please re enter your coin amounts as a number greater than or equal to 0. " << endl;
		return main();
	}

	cout << "You have " << penny_am << " pennies." << endl;

	cout << "You have " << nickel_am << " nickels." << endl;

	cout << "You have " << dime_am << " dimes." << endl;

	cout << "You have " << quarter_am << " quarters." << endl;

	cout << "You have " << halfdollar_am << " half dollars." << endl;

	cout << "You have " << dollar_am << " dollar coins." << endl;

	//Computations
	total = pennies * penny_am + nickels * nickel_am + dimes * dime_am + quarters * quarter_am + halfdollars * halfdollar_am + dollars * dollar_am;

	//Results
	cout << setprecision(3);
	cout << "The value of all of your coins is: $" << total << ".";
}




