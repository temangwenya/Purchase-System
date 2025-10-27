//Question_1.cpp: this file contains source code for a purchase system program.
#include <iostream>
using namespace std;

//catalogue structure
struct gadgets {
	string gName;
	float price;
};   //structure + structure name   //struct = structure; can contain different data types unlike an array

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


	//User input 1st and last name
	string firstName, lastName;
	cout << "Enter your first name: \n";
	cin >> firstName;
	cout << "Enter your last name: \n";
	cin >> lastName;

	cout << endl;

	//catalogue function call
	catalogueDisplay(catalogue, 8); 

	cout << endl;

	return 0;
}

//function to display the catalogue
void catalogueDisplay(gadgets catalogue[], int size) {
	cout << "Gadget Catalogue:\n";
	cout << "-----------------\n";
	for (int items = 0; items < size; items++) 
	{
		cout << items + 1 << ". " << catalogue[items].gName << " - R" << catalogue[items].price << endl;
	}
}