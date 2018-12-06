#include "Drone.h"
#include <string>


Drone::Drone():TechProduct::TechProduct()
{
    m_timePerCharge=0;
	m_camera="";
	m_signalDiameter=0;
}
Drone::Drone(string brand, string model, double time, double diameter, string camera, double price=0, int quantity=0):TechProduct::TechProduct(brand, model, price, quantity)
{
    m_timePerCharge=time;
	m_camera=camera;
	m_signalDiameter=diameter;
}

bool Drone::operator==(const Drone& other) //compares only brand, model, camera, time per charge and price. Those should be enough to identify the same model of Drone.
{
	return m_brand == other.m_brand && m_model == other.m_model && m_camera == other.m_camera && m_timePerCharge == other.m_timePerCharge
	&& m_price == other.m_price;
}

ostream& operator<<(ostream& os, const Drone& d)
{
	os << "Drone [ID#" << d.m_id << ", Brand=" << d.m_brand << ", Model=" << d.m_model << ", Time per Charge=" << d.m_timePerCharge
		<< " min, Camera=" << d.m_camera << ", Signal diameter=" << d.m_signalDiameter << " miles, Quantity=" << d.m_quantity
		<< ", Price=$" << d.m_price << "]";
	return os;
}

void Drone::update(){
    string brand, model, camera;
    double diameter, price, time;
    int quantity;
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
		    setBrand(brand);
			setModel(model);
			setCamera(camera);
			setTimePerCharge(time);
			setSignalDiameter(diameter);
			setPrice(price);
			setQuantity(quantity);
}
