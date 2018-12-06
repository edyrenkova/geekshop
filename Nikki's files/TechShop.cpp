#include <iostream>
#include <string>

#include "Item.h"
#include "ItemList.h"
int main(int argv, char* argc[])
{

	string brand, model;
	double length, width, thickness, price;
	int id, quantity;
	
	ItemList il;

	int choice = 0;

	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO THE                            **" << endl;
		cout << "**                          ITEM SHOP                            **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new Item to Inventory                               **" << endl;
		cout << "** 2)  Remove a Item from Inventory                              **" << endl;
		cout << "** 3)  Display all Items in Inventory                            **" << endl;
		cout << "** 4)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
		cin >> choice;
		cin.ignore(INT_MAX, '\n');
		switch (choice)
		{
		case 1:
		{
			cout << "Enter Brand: ";
			getline(cin, brand);
			cout << "Enter Model: ";
			getline(cin, model);
			cout << "Enter Length: ";
			cin >> length;
			cout << "Enter Width: ";
			cin >> width;
			cout << "Enter Thickness: ";
			cin >> thickness;
			cout << "Enter Quantity: ";
			cin >> quantity;
			cout << "Enter Price $";
			cin >> price;
			
			Item it(brand, model, length, width, thickness, quantity, price);
			if(il.addItem(it))
			cout<< "board added successfully!" << endl;
			
			else
			cout<< "Inventory full." << endl;
		
			cout << endl;
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			
			break;
		case 3:
            
            cout << il << endl;

			break;
		case 4:
			cout << "Tou have exited!" << endl;
			break;
		}

	} while (choice != 4);
	cout << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
