#include "DroneList.h"
#include <string>
DroneList::DroneList(){
    m_count=0;
}
void DroneList::addDrone(){
    int quantity;
    string model, brand, camera;
    double time, diameter, price;
    cin.ignore(INT_MAX, '\n');
	cout << "Enter Brand: ";
	getline(cin, brand);
	cout << "Enter Model: ";
	getline(cin, model);
	cout << "Enter camera: ";
	getline(cin, camera);
	cout << "Enter Lifespan per Charge: ";
	cin >> time;
	cout << "Enter Diameter of Signal Reception: ";
	cin >> diameter;
	cout << "Enter Quantity: ";
	cin >> quantity;
	cout << "Enter Price $";
	cin >> price;
	Drone d(brand, model, time, diameter, camera, price, quantity);
    if(m_count<SIZE){
        m_list[m_count++]=d;
        cout<<"Added!\n";
    }
    else{
        cout<<"No more room!\n";
    }
}

bool DroneList::removeDrone(int id){
    int index;
    bool found=false;
    for(int i=0;i<SIZE;i++){
        if(m_list[i].getId()==id){
            index=i;
            found=true;
            break;
        }
    }
    if(found){
        m_count--;
        for(int i=index;i<SIZE-1;i++){
            m_list[i]=m_list[i+1];
        }
    }
    return found;
}
bool DroneList::updateDrone(int id){
    string brand, model, camera;
	double price, time, diameter;
	int quantity;
    for(int i=0;i<m_count;i++){
        if(m_list[i].getId()==id){
            m_list[i].update();
            return true;
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const DroneList& dl){
    for(int i=0;i<dl.m_count;i++){
        os<<dl.m_list[i]<<"\n";
    }
    return os;
}
