#include "DroneList.h"

DroneList::DroneList(){
    m_count=0;
}
bool DroneList::addDrone(Drone d){
    if(m_count<SIZE){
        m_count++;
        m_list[m_count-1]=d;
        return true;
    }
    else{
        return false;
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
            cin.ignore(INT_MAX, '\n');
			cout << "\nEnter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated camera: ";
			getline(cin, camera);
			cout << "Enter Updated Lifespan per Charge: ";
			cin >> time;
			cout << "Enter Updated Diameter of Signal Reception: ";
			cin >> diameter;
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Price $";
			cin >> price;
			m_list[i].setBrand(brand);
			m_list[i].setModel(model);
			m_list[i].setCamera(camera);
			m_list[i].setTimePerCharge(time);
			m_list[i].setSignalDiameter(diameter);
			m_list[i].setPrice(price);
			m_list[i].setQuantity(quantity);
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
