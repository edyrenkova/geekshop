#include <cstdlib>
#include <iostream>

#include "Camera.h"
#include "CameraList.h"
#include "Battery.h"
#include "BatteryList.h"

using namespace std;

void geekMenu();
void batteryMenu();
void cameraMenu();

int main(int argc, char *argv[])
{
    string model , brand, aperture;
    double price;
    int quantity, id, capacity;
	
    CameraList cl;

	BatteryList bl;
	
    int select = 0;
	int choice = 0;
	
	do
	{
        geekMenu();
		cin >> select;
		cin.ignore(INT_MAX, '\n');
		
        switch (select)
		{
            case 1:
            
            do
            {
                batteryMenu();
                cin >> choice;
                cin.ignore(INT_MAX, '\n');
                
                switch (choice)
                {
                    case 1:
                    {
                        cout << "Enter Battery Model: ";
                        getline(cin, model);
                   		cout << "Enter Brand Name: ";
                   		getline(cin, brand);
                   		cout << "Enter Price Paid: ";
                  		cin >> price;
                  		cout << "Enter Number of Items Purchased: ";
                   		cin >> quantity;
                   		cout << "Enter capacity: ";
                   		cin >> capacity;
                   			
                   		Battery ba(model, brand, price, quantity, capacity);
			             if(bl.addBattery(ba))
                   		cout<< "Battery added successfully!" << endl;
			
			             else
		              	cout<< "Battery cannot be added." << endl;
		
			               cout << endl;
		              	break;
		            }
		                
		            case 2:
                    {
                        cout << bl << endl;
                        cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
                        cin >> id;
                        if(id==-1) break;
			
                		if (bl.removeBattery(id))
                		cout<<"Battery removed successfully!"<<endl;
                		
                        else
                		cout<<"Unable to remove, please try again."<<endl;
                			
                		break;	
                    }
		                
		            case 3:
                    {
                        cout << bl << endl;
                    	cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
                   		cin >> id;
                   		if (id == -1) break;
                    
                   		cin.ignore(INT_MAX, '\n');
                   		cout << "\nEnter Updated Name: ";
                   		getline(cin, model);
                   		cout << "Enter Updated Brand: ";
                   		getline(cin, brand);
                   		cout << "Enter Updated Price: ";
                   		cin >> price;
                   		cout << "Enter Updated Quantity: ";
                   		cin >> quantity;
                   		cout << "Enter Updated capacity: ";
                   		cin >> capacity;
			
                        if (bl.updateBattery(id, model, brand, price, quantity, capacity))
                    	cout << "~~~Battery updated successfully!~~~" << endl;
                        
                        else
                    	cout << "~~~Failed to update Battery~~~" << endl;
                                                            
                        break;
                    }
		                
                    case 4:
                    {
                        cout << bl << endl;
                        break;
                    }

		            case 5:
                    {
                        cout << "You have exited!" << endl;
                        break;
		            }
        
			}
			}
                while (choice!=5);
                cout << endl;
                break;
                
            case 2:
            
            do
            {
                cameraMenu();
                cin >> choice;
                cin.ignore(INT_MAX, '\n');
                
                switch (choice)
                {
                    case 1:
                    {
                        cout << "Enter Camera Model: ";
                        getline(cin, model);
              			cout << "Enter Camera Number: ";
                 		getline(cin, brand);
                        cout << "Enter price";
                        cin >> price;
            			cout << "Enter quantity: ";
            			cin >> quantity;
            			cout << "Enter aperture: ";
            			getline(cin, aperture);
                        
                                       			
                        Camera ca(model, brand, price, quantity, aperture);
                        if(cl.addCamera(ca))
                        cout<< "Camera added successfully!" << endl;
                        			
                        else
                        cout<< "Camera cannot be added." << endl;
    		
    			        cout << endl;
    		            break;
		            }
		                
		            case 2:
                    {
                        cout << cl << endl;
                        cout << "\nWhich ID# would you like to remove? (or -1 to cancel) >> ";
                		cin >> id;
                		if(id ==-1) break;
                		  	        
                		if (cl.removeCamera(id))
                		cout<<"Camera removed successfully!"<<endl;
                			        
                        else
                		cout<<"Unable to remove, please try again."<<endl;
                			
                		break;
                			
                    }
                                
                    case 3:
                    {
                        cout << cl << endl;
                        cout << "\nWhich ID# would you like to update? (or -1 to cancel) >> ";
            			cin >> id;
            			if (id == -1) break;
            
            			cin.ignore(INT_MAX, '\n');
            			cout << "\nEnter Updated Model: ";
            			getline(cin, model);
            			cout << "Enter Updated Brand: ";
            			getline(cin, brand);
            			cout << "Enter Updated price: ";
            			cin >> price;
            			cout << "Enter Updated quantity: ";
            			cin >> quantity;
            			cout << "Enter Updated aperture: ";
            			getline(cin, aperture);

                        if (cl.updateCamera(id, model, brand, price, quantity, aperture))
            			cout << "~~~Camera updated successfully!~~~" << endl;
            			
                        else
            			cout << "~~~Failed to update Camera~~~" << endl;
                                        
                        break;
                    }
		                
                    case 4:
                    {
                        cout << cl << endl;
                        break;
                    }

		            case 5:
                    {
                        cout << "You have exited!" << endl;
                        break;
		            }
                }
            }
		
           
            while(choice!=5);
            cout<<endl;
            break;
       
    }
    
     
}   

while (select != 3);  // end do / while (select != 3)
            
system("PAUSE");
return EXIT_SUCCESS;
}
        
void geekMenu()
{
    cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          Geek shop                                 **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1) Battery Menu                                                    **" << endl;
		cout << "** 2) Camera Menu                                                     **" << endl;
		cout << "** 3) Exit                                                            **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
}
void batteryMenu()
{
    cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                         Battery Menu                               **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new Battery                                              **" << endl;
		cout << "** 2)  Remove a Battery                                               **" << endl;
		cout << "** 3)  Update a Battery                                               **" << endl;
		cout << "** 4)  Display all Battery                                            **" << endl;
		cout << "** 5)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
}

void cameraMenu()
{
    cout << "************************************************************************" << endl;
		cout << "**                                                                    **" << endl;
		cout << "**                          Camera Menu                               **" << endl;
		cout << "**                                                                    **" << endl;
		cout << "************************************************************************" << endl;
		cout << "** Please make a choice from the following options:                   **" << endl;
		cout << "** 1)  Add a new Camera                                               **" << endl;
		cout << "** 2)  Remove a Camera                                                **" << endl;
		cout << "** 3)  Update a Camera                                                **" << endl;
		cout << "** 4)  Display all Camera                                             **" << endl;
        cout << "** 5)  Exit                                                           **" << endl;
		cout << "************************************************************************" << endl;
		cout << ">> ";
}
    
	
