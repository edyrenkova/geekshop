/****************************************************
* AUTHOR: Samuel Nguyen
* COURSE: CS 150: C++ Programming 1
* SECTION: Tu Thur 11:00-12:50 PM
* IC (PROJECT)#: 26
* LAST MODIFIED: 11/27/18
*****************************************************/
/*****************************************************************************
* Capstone Phase 1
*****************************************************************************/
#include <cstdlib>
#include <iostream>
#include <string>

#include "Laptops.h"
#include "LaptopsList.h"

using namespace std;

int main(int argc, char *argv[])
{
    string model, brand, cpu;
    int quantity, id, storage;
    double price;

    LaptopsList tl;


    int choice = 0;

	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO THE                            **" << endl;
		cout << "**                          TECHNOLOGY SHOP                           **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new laptop to Inventory                                  **" << endl;
		cout << "** 2)  Remove laptop from Inventory                                   **" << endl;
		cout << "** 3)  Display all laptops in Inventory                               **" << endl;
        cout << "** 4)  Update laptops(based on id) in Inventory                       **" << endl;
		cout << "** 5)  Exit                                                           **" << endl;
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
			cout << "Enter Cpu type: ";
			getline(cin, cpu);
            cout << "Enter storage size(gb): ";
			cin >> storage;
			cout << "Enter Quantity: ";
			cin >> quantity;
			cout << "Enter Price $";
			cin >> price;
            //declare a new object
            Laptops tb (model, brand, cpu, quantity, price, storage);
			//add to list
            if (tl.addTech(tb))
                cout << "Laptop added successfully!" << endl;
            else
                cout << "Inventory full, please try again after removing." << endl;

			cout << endl;
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
            if (tl.removeTech(id))
                cout << "Laptop removed successfully!" << endl;
            else
                cout << "Invalid entry. Please try again." << endl;
			
			break;
        case 3:
            cout << tl << endl;
			cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
			cin >> id;
			if (id == -1) break;

			cin.ignore(INT_MAX, '\n');
			cout << "Enter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated cpu description: ";
			getline(cin, cpu);
            cout << "Enter Updated Storage(Ohms): ";
			cin >> storage;
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Price $";
			cin >> price;

            // Now update the board!
            if (tl.updateTech(id, model, brand, cpu, quantity, price, storage))
				cout << "~~~Laptop updated successfully!~~~" << endl;
			else
				cout << "~~~Failed to update Laptop from Inventory~~~" << endl;
            break;
		case 4:
            cout << tl << endl;
			break;
		case 5:
			cout << "Thank you for shopping at our store." << endl;
			break;
		}

	} while (choice != 5);
	cout << endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
