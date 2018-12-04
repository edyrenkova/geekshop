/****************************************************
* AUTHOR: Nikki Perez
* COURSE: CS 150: C++ Programming 1
* SECTION: TTh 11 AM
* IC (PROJECT)#:  IC26_CapstonePhase1
* LAST MODIFIED: 11/27/2018
*****************************************************/
/*****************************************************************************
*  IC26_CapstonePhase1
*****************************************************************************
* PROGRAM DESCRIPTION: 
* Implement a new class named Battery that contains information about a Battery from the tech shop.
*****************************************************************************
* ALGORITHM:
* class named Battery that contains information about a Battery from the tech shop. 
* The Batterylist class has:
*   The count of Batteries in the system
*   An array of Batteries to store them all
* constant static variable to keep the total size of the inventory to(100)
* BatteryList class member functions:
* addBattery- take a Battery object and add it to the list.  If the list is full (count == SIZE), return false.  Otherwise return true.
* removeBattery- take a Battery id# and remove it from the list.  If the id cannot be found, return false.  Otherwise return true.
* operator<< turn a BatteryList into a string for display
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* #include <cstdlib>
* #include <iostream>
*****************************************************************************/

#include <iostream>
#include <string>

#include "Battery.h"
#include "BatteryList.h"
int main(int argv, char* argc[])
{

	string name, brand;
	double price;
	int quantity, id, capacity;
	
	BatteryList bl;

	int choice = 0;

	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO THE                            **" << endl;
		cout << "**                            TECH SHOP                               **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new battery                                              **" << endl;
		cout << "** 2)  Remove a battery                                               **" << endl;
		cout << "** 3)  Display all batteries                                          **" << endl;
		cout << "** 4)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
		cin >> choice;
		cin.ignore(INT_MAX, '\n');
		switch (choice)
		{
		case 1:
		{
			cout << "Enter Battery Name: ";
			getline(cin, name);
			cout << "Enter Brand Name: ";
			getline(cin, brand);
			cout << "Enter Number of battaries needed";
            cin << capacity;
			cout << "Enter Price Paid: ";
			cin >> price;
			cout << "Enter Number of Items Purchased: ";
			cin >> quantity;
			
			
			Battery ba(name, brand, price, quantity, capacity);
			if(bl.addBattery(ba))
			cout<< "Battery added successfully!" << endl;
			
			else
			cout<< "Battery cannot be added." << endl;
		
			cout << endl;
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			
			if (bl.removeBattery(id))
			cout<<"Battery removed successfully!"<<endl;
			else
			cout<<"Unable to remove, please try again."<<endl;
			
			break;
			
			break;
		case 3:
            
            cout << bl << endl;

			break;
		case 4:
			cout << "You have exited!" << endl;
			break;
		}

	} while (choice != 4);
	cout << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
