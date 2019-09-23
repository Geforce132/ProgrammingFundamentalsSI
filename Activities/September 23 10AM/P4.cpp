// This program will ask the user to enter three names of
// items that you could buy at a grocery store. It will then
// ask the user to enter the price of each of item and how many
// they purchased. Once a receipt has been displayed on the screen
// listing the items being purchased, the program will calculate
// and display the total cost of the order.

#include <iostream>
/****************/
/****************/
using namespace std;

int main() {
	string /****************/, /****************/, /****************/;
	double /****************/, /****************/, /****************/;
	int /****************/, /****************/, /****************/;
	double /****************/;

	cout << "Enter the name of the first item that you wish to purchase: ";
	/****************/(cin, /****************/);

	cout << "Enter the name of the second item that you wish to purchase: ";
	/****************/(cin, /****************/);

	cout << "Enter the name of the third item that you wish to purchase: ";
	/****************/(cin, /****************/);

	cout << endl;

	cout << "Enter the price of " << /****************/ << " and the amount that you wish to purchase separated by a space: ";
	cin >> /****************/ >> /****************/;

	cout << "Enter the price of " << /****************/ << " and the amount that you wish to purchase separated by a space: ";
	cin >> /****************/ >> /****************/;

	cout << "Enter the price of " << /****************/ << " and the amount that you wish to purchase separated by a space: ";
	cin >> /****************/ >> /****************/;

	/****************/ = (/****************/ * /****************/) + (/****************/ * /****************/) + (/****************/ * /****************/);

	cout << "\nYou bought:\n" << /****************/ << " " << /****************/;
	cout << "\n" << /****************/ << " " << /****************/;
	cout << "\n" << /****************/ << " " << /****************/;
	cout << "\n\nYour total is: $" << /****************/ << /****************/ << /****************/;

	return 0;
}