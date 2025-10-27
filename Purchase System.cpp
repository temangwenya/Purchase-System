// Purchase System.cpp : This file houses a purchase system program.
#include <iostream>
using namespace std;

//catalogue structure
struct gadgets { 
	string gName;
	float price;
};              	//structure + structure name    //struct = structure; can contain different data types unlike an array


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
	};		// structure name (which has become the data type) + variable name


	//User inputs first and last name
	string firstName, lastName;

	cout << "Enter your first name: ";
	cin >> firstName;
	cout << "Enter last name: ";
	cin >> lastName;

	cout << endl;

	//---------------------------------------------------
	//catalogue function call
	catalogueDisplay(catalogue, 8); //function call to display the catalogue

	cout << endl;


	//----------------------------------------------------
	//User Selection
	int answer, itemNo, quantity, total, noOfItems, subtotalPrice, discount;

	cout << "How many items would you like to purchase? (Max 10): ";
	cin >> answer;

	while (answer > 10) {
		cout << "You have exceeded the maximum amount of items. Please try again.\n";
		cout << "How many items would you like to purchase? (Max 10): ";
		cin >> answer;
	}

	noOfItems = 0;
	subtotalPrice = 0;
	
	while (noOfItems < answer) {//while (loop=false)
		cout << "Enter item number (1-8): ";
		cin >> itemNo;
		cout << "Enter quantity: ";
		cin >> quantity;

		if (noOfItems + quantity > answer) {
			cout << "You have exceeded your requested amount. Please try again.\n";
		}
		else
		{
			noOfItems = noOfItems + quantity; //noOfItems+= quantity
			subtotalPrice = subtotalPrice + (quantity * catalogue[itemNo - 1].price); //-1 because array starts at 0
		//subTotalPrice+=quantity * catalogue[itemNo -1].price;
		}
	}
	
	discount = 0;
	if (subtotalPrice > 2000) {
		discount = subtotalPrice * 0.15;
	}


	cout << "Subtotal price: R" << subtotalPrice << endl;
	cout << "Discount: R" << discount << endl;
	cout << "Total price: R" << subtotalPrice - discount << endl;

	

	return 0;
}



	//function to display the catalogue 
void catalogueDisplay(gadgets catalogue[], int size)
{	
	cout << "Gadget Catalogue:\n";
	cout << "-----------------\n";
	for (int items = 0; items < size; items++) {
		cout << items + 1 << ". " << catalogue[items].gName << " - R" << catalogue[items].price << "\n";
	}
} // void means the function is there to perform a task/display info; not to return a value
	
