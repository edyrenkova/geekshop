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
#include <iomanip>
#include <string>

#include "Drone.h"
#include "DroneList.h"
#include "VoiceAssistant.h"
#include "VoiceAssistantList.h"

using namespace std;

DroneList drones;
VoiceAssistantList vas;


void innerMenuDrone(){
    int userChoice, id;
    do {
		cout << "Please make a choice from the following options:" << endl;
		cout <<"1)  Add a new Drone to Inventory" << endl;
		cout <<"2)  Remove a Drone from Inventory" << endl;
		cout <<"3)  Update a Drone from Inventory" << endl;
		cout <<"4)  Display all Drone in Inventory" << endl;
		cout <<"5)  Exit fom this menu" << endl;
		cout << ">> ";
		cin >> userChoice;
		switch (userChoice)
		{
		case 1:
		{
			drones.addDrone();
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			if(id!=-1){
    			if(!drones.removeDrone(id)){
                    cout<<"There is no such drone in the inventory\n";
                }
                else{
                    cout<<"Removed!\n";
                }
            }
			break;
		case 3:
            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
			cin >> id;
			if(id!=-1){
                if(!drones.updateDrone(id)){
                    cout<<"There is no such drone in the inventory\n";
                }
            }
			break;
		case 4:
            cout<<drones;
			break;
		case 5:
			cout << "Going back" << endl;
			break;
		}

	} while (userChoice != 5);
	cout << endl;
}

void innerMenuVA(){
    int userChoice, id;
    do {
		cout << "Please make a choice from the following options:" << endl;
		cout <<"1)  Add a new Voice Assistant to Inventory" << endl;
		cout <<"2)  Remove a Voice Assistant from Inventory" << endl;
		cout <<"3)  Update a Voice Assistant from Inventory" << endl;
		cout <<"4)  Display all Voice Assistant in Inventory" << endl;
		cout <<"5)  Exit fom this menu" << endl;
		cout << ">> ";
		cin >> userChoice;
		switch (userChoice)
		{
		case 1:
		{
			vas.addVoiceAssistant();
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			if(id!=-1){
    			if(!vas.removeVoiceAssistant(id)){
                    cout<<"There is no such Voice Assistant in the inventory\n";
                }
                else{
                    cout<<"Removed!\n";
                }
            }
			break;
		case 3:
            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
			cin >> id;
			if(id!=-1){
                if(!vas.updateVoiceAssistant(id)){
                    cout<<"There is no such Voice Assistant in the inventory\n";
                }
            }
			break;
		case 4:
            cout<<vas;
			break;
		case 5:
			cout << "Going back" << endl;
			break;
		}

	} while (userChoice != 5);
	cout << endl;
}

int main(int argv, char* argc[])
{
	int userChoice = 0;
	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO THE                            **" << endl;
		cout << "**                            GEEK SHOP                               **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Manage Drones                                                  **" << endl;
		cout << "** 2)  Manage Voice Assistants                                        **" << endl;
		cout << "** 3)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
		cin >> userChoice;
		switch (userChoice)
		{
		case 1:
		{
			innerMenuDrone();
			break;
		}
		case 2:
			innerMenuVA();
			break;
		case 3:
            cout<<"Bye\n";
			break;
		}

	} while (userChoice != 3);
	cout << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
