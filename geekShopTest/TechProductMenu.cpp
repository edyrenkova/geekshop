/****************************************************
* AUTHOR: Emiliia Dyrenkova
* COURSE: CS 150: C++ Programming 1
* SECTION: Tue Th 11:00-12:50
* IC (PROJECT)#: IC26
* LAST MODIFIED: 11/28/18
*****************************************************/
/*****************************************************************************
* Tech shop
*****************************************************************************
* PROGRAM DESCRIPTION:
* Demoes Drone and Drone List class
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* cstdlib, iostream, string, Drone.h, DroneList.h
*****************************************************************************/
#include <iostream>
#include <string>

#include "TechProduct.h"
#include "TechProductList.h"


int main(int argv, char* argc[])
{/*
	

	int userChoice = 0;
	DroneList drones;
	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO THE                            **" << endl;
		cout << "**                            GEEK SHOP                               **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new Drone to Inventory                                   **" << endl;
		cout << "** 2)  Remove a Drone from Inventory                                  **" << endl;
		cout << "** 3)  Update a Drone from Inventory                                  **" << endl;
		cout << "** 4)  Display all Drones in Inventory                                **" << endl;
		cout << "** 5)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
		cin >> userChoice;
		cin.ignore(INT_MAX, '\n');
		switch (userChoice)
		{
		case 1:
		{
			cout << "Enter Brand: ";
			getline(cin, brand);
			cout << "Enter Model: ";
			getline(cin, model);
			cout << "Enter Time of Life per charge: ";
			cin >> time;
			cout << "Enter Diameter of Signal: ";
			cin >> diameter;
			cout << "Enter camera (n/a if no camera is present): ";
			cin >> camera;
			cout << "Enter Quantity: ";
			cin >> quantity;
			cout << "Enter Price $";
			cin >> price;
			
			Drone d(brand, model, time, diameter, camera,price,quantity);
            if(!drones.addDrone(d)){
                cout<<"The list is full!\n";
            }
            else{
                cout<<"Added!\n";
            }
			cout << endl;
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			if(!drones.removeDrone(id)){
                cout<<"There is no such drone in the inventory\n";
            }
            else{
                cout<<"Removed!\n";
            }
			break;
		case 3:
            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
			cin >> id;
            if(!drones.updateDrone(id)){
                cout<<"There is no such drone in the inventory\n";
            }
			break;
		case 4:
            cout<<drones;
			break;
		case 5:
			cout << "Bzzz, bye!!!" << endl;
			break;
		}

	} while (userChoice != 5);
	cout << endl;
*/
	system("PAUSE");
	return EXIT_SUCCESS;
}

void innerMenu()

