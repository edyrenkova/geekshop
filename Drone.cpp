#include "Drone.h"
#include <string>

int Drone::s_nextId = 10000;

Drone::Drone()
{
	m_id = 0;
	m_brand = "";
	m_model = "";
    m_timePerCharge=0;
	m_camera="";
	m_signalDiameter=0;
	m_quantity=0; 
	m_price=0;
}
Drone::Drone(string brand, string model, double time, double diameter, string camera, double price=0, int quantity=0)
{
	m_id = ++s_nextId;
	m_brand = brand;
	m_model = model;
    m_timePerCharge=time;
	m_camera=camera;
	m_signalDiameter=diameter;
	m_quantity=quantity; 
	m_price=price;
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
