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
#include<iomanip>
#include <string>

#include "TechProduct.h"
#include "TechProductList.h"
#include "Drone.h"
#include "VoiceAssistant.h"
#include "Headphones.h"
#include "Laptops.h"


void addToTheList(TechProductList& list, string productType){
    string brand, model;
    int quantity,userChoice;
    double price;
    if(productType=="Drone"){
        Drone *product = new Drone();
        double time, diameter;
        string camera;
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
        product->setBrand(brand);
		product->setModel(model);
		product->setPrice(price);
		product->setQuantity(quantity);
		product->setTimePerCharge(time);
		product->setSignalDiameter(diameter);
		product->setCamera(camera);
		if(!list.addTechProduct(product)){
           cout<<"The list is full!\n";
        }else cout<<"Added!\n";
    }
    else if(productType=="Voice Assistant"){
        VoiceAssistant *product = new VoiceAssistant();
        double weight;
        string color, searchEngine;
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
		product->setBrand(brand);
		product->setModel(model);
		product->setPrice(price);
		product->setQuantity(quantity);
		product->setSearchEngine(searchEngine);
		product->setColor(color);
		product->setWeight(weight);
        if(!list.addTechProduct(product)){
        cout<<"The list is full!\n";
        }
        else cout<<"Added!\n";
    }
    else if(productType=="Headphone"){
        Headphones *product = new Headphones();
        int impedance;
        string driverSize;
        cout << "Enter Brand: ";
		getline(cin, brand);
		cout << "Enter Model: ";
		getline(cin, model);
		cout << "Enter driver size (small, medium, large): ";
		cin >> driverSize;
		cout << "Enter Impedance: ";
		cin >> impedance;
		cout << "Enter Quantity: ";
		cin >> quantity;
		cout << "Enter Price $";
		cin >> price;
		product->setBrand(brand);
		product->setModel(model);
		product->setPrice(price);
		product->setQuantity(quantity);
		product->setImpedance(impedance);
		product->setDriverSize(driverSize);
        if(!list.addTechProduct(product)){
        cout<<"The list is full!\n";
        }
        else cout<<"Added!\n";
    }
    else if(productType=="Laptop"){
        Laptops *product = new Laptops();
        int storage;
        string cpu;
        cout << "Enter Brand: ";
		getline(cin, brand);
		cout << "Enter Model: ";
		getline(cin, model);
		cout << "Enter CPU name: ";
		cin >> cpu;
		cout << "Enter Storage Size (in GB): ";
		cin >> storage;
		cout << "Enter Quantity: ";
		cin >> quantity;
		cout << "Enter Price $";
		cin >> price;
		product->setBrand(brand);
		product->setModel(model);
		product->setPrice(price);
		product->setQuantity(quantity);
		product->setStorage(storage);
		product->setCpu(cpu);
        if(!list.addTechProduct(product)){
        cout<<"The list is full!\n";
        }
        else cout<<"Added!\n";
    }
}

void innerMenu(TechProductList& list, string productType){
    string brand, model;
    int quantity,userChoice, id;
    double price;
    do {
		cout << "Please make a choice from the following options:" << endl;
		cout <<"1)  Add a new "<<productType<<" to Inventory" << endl;
		cout <<"2)  Remove a "<<productType<<" from Inventory" << endl;
		cout <<"3)  Update a "<<productType<<" from Inventory" << endl;
		cout <<"4)  Display all "<<productType<<"s in Inventory" << endl;
		cout <<"5)  Exit" << endl;
		cout << ">> ";
		cin >> userChoice;
		cin.ignore(INT_MAX, '\n');
		switch (userChoice)
		{
		case 1:
		{
			addToTheList(list,productType);
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			if(!list.removeTechProduct(id)){
                cout<<"There is no such " << productType << " in the inventory\n";
            }
            else{
                cout<<"Removed!\n";
            }
			break;
		case 3:
            cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
			cin >> id;
            if(!list.updateTechProduct(id))
            {
                cout<<"There is no such " << productType << " in the inventory\n";
            }
			break;
		case 4:
            cout << endl;
            list.print();
            cout << endl;
			break;
		case 5:
			cout << endl << "Bzzz, bye!!!" << endl;
			break;
		}
    cout << endl;
	} while (userChoice != 5);

	
}

int main(int argv, char* argc[])
{
    TechProductList droneList;
    TechProductList VAList;
    TechProductList HeadphonesList;
    TechProductList LaptopsList;
    
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
        cout << "** 3)  Manage Headphones                                              **" << endl;
        cout << "** 4)  Manage Laptops                                                 **" << endl;
        cout << "** 5)  Manage Cameras                                                 **" << endl;
        cout << "** 6)  Manage Batteries                                               **" << endl;
		cout << "** 7)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
		cin >> userChoice;
		cin.ignore(INT_MAX, '\n');
		switch (userChoice)
		{
		case 1:
		{
			innerMenu(droneList,"Drone");
			break;
		}
		case 2:
			innerMenu(VAList,"Voice Assistant");
			break;
        case 3:
            innerMenu(HeadphonesList,"Headphone");
            break;
        case 4:
            innerMenu(LaptopsList,"Laptop");
            break;
        case 5:
            //innerMenu(CameraList,"Camera");
            break;
        case 6:
            //innerMenu(BatteryList,"Battery");
            break;
    
		case 7:
            cout<<"Bye\n";
			break;
		}
    
    cout << endl;
	} while (userChoice != 7);

	system("PAUSE");
	return EXIT_SUCCESS;
}
