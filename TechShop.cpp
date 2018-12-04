#include <iostream>
#include <string>

#include "Camera.h"
#include "CameraList.h"
int main(int argv, char* argc[])
{

	string name, brand;
	double price;
	int quantity, date, id;
	
	CameraList cl;

	int choice = 0;

	do {
		cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          WELCOME TO THE                            **" << endl;
		cout << "**                            TECH SHOP                               **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new Camera                                               **" << endl;
		cout << "** 2)  Remove a Camera                                                **" << endl;
		cout << "** 3)  Display all Cameras                                            **" << endl;
		cout << "** 4)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
		cin >> choice;
		cin.ignore(INT_MAX, '\n');
		switch (choice)
		{
		case 1:
		{
			cout << "Enter Camera Name: ";
			getline(cin, name);
			cout << "Enter Brand Name: ";
			getline(cin, brand);
			cout << "Enter Price Paid: ";
			cin >> price;
			cout << "Enter Number of Items Purchased: ";
			cin >> quantity;
			cout << "Enter Date of Purchase: ";
			cin >> date;
			
			Camera ca(name, brand, price, quantity, date);
			if(cl.addCamera(ca))
			cout<< "camera added successfully!" << endl;
			
			else
			cout<< "camera cannot be added." << endl;
		
			cout << endl;
			break;
		}
		case 2:
			
			cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
			cin >> id;
			
			if (cl.removeCamera(id))
			cout<<"Camera removed successfully!"<<endl;
			else
			cout<<"Unable to remove, please try again."<<endl;
			
			break;
			
			break;
		case 3:
            
            cout << cl << endl;

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
