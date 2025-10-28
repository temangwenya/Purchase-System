//Question_1.cpp: this file contains source code for a purchase system program.
#include <iostream>
using namespace std;

//catalogue structure
struct gadgets {
	string gName;
	float price;
};   //structure + structure name   //struct = structure; can contain different data types unlike an array

//function prototypes
void catalogueDisplay(gadgets catalogue[], int size);


int main() {

	//catalogue structure array
	gadgets catalogue[8] = {
		{"Wireless Mouse", 150.00},
		{"Bluetooth Speaker", 250.00},
		{"USB Flash Drive", 100.00},
		{"Gaming Keyboard", 500.00},
		{"Noise-Cancelling Headphones", 750.00},
		{"Smartwatch", 1200.00},
		{"External Hard Drive", 1000.00},
		{"Portable Charger", 300.00},
	};    //structure name (which has become the data type) + variable name
	

	//User input first and last name
	string firstName, lastName;

	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter your last name: ";
	cin >> lastName;

	cout << endl;

	//----------------------------------------------------------
	//catalogue function call
	catalogueDisplay(catalogue, 8);

	cout << endl;


	//----------------------------------------------------------
	//User Selection (max 10 items)
	int itemAnswer, itemNo = 0, quantity, totalItems = 0;
	double subtotal = 0;               //subtotal variable is part of subtotal calculation
	

	cout << "How many items would you like to purchase (up to 10)? ";
	cin >> itemAnswer;

		//Validation (Item Selection)
	while (itemAnswer > 10 || itemAnswer < 1) {
		cout << "Invalid input. Enter a number between 1 and 10. \n";
		cout << "How many items would you like to purchase (up to 10)? ";
		cin >> itemAnswer;
	};
	
		//for loop (keep looping as long as items are less than the user's answer)
	for (int i = 0; i < itemAnswer; i++) {
		cout << "Enter the item number (1-8): ";
		cin >> itemNo;

			//Validation [Item Number (1-8)]
		while (itemNo > 8 || itemNo < 1) {
			cout << "Invalid input. Enter a number between 1 and 8, corresponding with items from the Tech Store Catalogue. \n";
			cout << "Enter the item number (1-8): ";
			cin >> itemNo;
			};

		cout << "Enter the quantity: ";
		cin >> quantity;

			//Validation (Quantity)
		while (quantity < 1) {
			cout << "Invalid quantity. Please enter at least 1: ";
			cin >> quantity;
		}

			//----------------------------------------------------------
			// Subtotal calculation (variable declared with User Selection)
		subtotal = subtotal + (quantity * catalogue[itemNo - 1].price);

	};
	

	//----------------------------------------------------------
	// Discount 15% for items over 2k
	double discount = 0;

	if (subtotal > 2000) {
		discount = subtotal * 0.15;
	}
	
	cout << "Subtotal price: R" << subtotal << endl;
	cout << "Discount: R" << discount << endl;
	cout << "Total price: R" << subtotal - discount << endl;


	return 0;
}


//function to display the catalogue
void catalogueDisplay(gadgets catalogue[], int size) {
	cout << "Tech Store Catalogue:\n";
	cout << "---------------------\n";
	for (int items = 0; items < size; items++)
	{
		cout << items + 1 << ". " << catalogue[items].gName << " - R" << catalogue[items].price << endl;
	}
}

