/****************************************************
* AUTHOR: Emiliia Dyrenkova
* COURSE: CS 150: C++ Programming 1
* SECTION: Tue Th 11:00-12:50
* IC (PROJECT)#: Capstone Phase 1
* LAST MODIFIED: 11/27/18
*****************************************************/
/*****************************************************************************
* Tech shop (Voice Assistant)
*****************************************************************************
* PROGRAM DESCRIPTION:
* 
*****************************************************************************
* ALL IMPORTED LIBRARIES NEEDED AND PURPOSE:
* cstdlib, iostream, string, Drone.h, DroneList.h
*****************************************************************************/
#include <iostream>
#include <string>

#include "VoiceAssistant.h"
#include "VoiceAssistantList.h"


int main(int argv, char* argc[])
{
	string brand, model, searchEngine, color;
	double weight, price;
	int id, quantity;

	int userChoice = 0;
	VoiceAssistantList assistants;
	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO THE                            **" << endl;
		cout << "**                            GEEK SHOP                               **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new Voice Assistant to Inventory                         **" << endl;
		cout << "** 2)  Remove a Voice Assistant from Inventory                        **" << endl;
		cout << "** 3)  Update a Voice Assistant from Inventory                        **" << endl;
		cout << "** 4)  Display all Voice Assistants in Inventory                      **" << endl;
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
			cout << "Enter Search Engine: ";
			cin >> searchEngine;
			cout << "Enter Color: ";
			cin >> color;
			cout << "Enter weight: ";
			cin >> weight;
			cout << "Enter Quantity: ";
			cin >> quantity;
			cout << "Enter Price $";
			cin >> price;
			
			VoiceAssistant va(brand, model, searchEngine, color, weight, price, quantity);
            if(!assistants.addVoiceAssistant(va)){
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
			if(!assistants.removeVoiceAssistant(id)){
                cout<<"There is no such drone in the inventory\n";
            }
            else{
                cout<<"Removed!\n";
            }
			break;
		case 3:
            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
			cin >> id;
            if(!assistants.updateVoiceAssistant(id)){
                cout<<"There is no such drone in the inventory\n";
            }
            
			break;
		case 4:
            cout<<assistants;
			break;
		case 5:
			cout << "Okay, Google, bye!!!" << endl;
			break;
		}

	} while (userChoice != 5);
	cout << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}
