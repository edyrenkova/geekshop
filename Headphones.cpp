#include "Headphones.h"
#include <string>

int Headphones::inventorySize=100;
int Headphones::t_nextId=10000;

Headphones::Headphones()
{
         m_id=0;
         m_model="";
         m_brand="";
         m_driverSize="";
         m_quantity=0;
         m_price=0.0;
         m_impedance=0;
}

Headphones::Headphones(string model, string brand, string driverSize, int quantity, double price, int impedance)
{
    m_id = t_nextId++;
    m_model=model;
    m_brand=brand;
    m_driverSize=driverSize;
    m_quantity=quantity;
    m_price=price;
    m_impedance=impedance;
}

bool Headphones::operator==(const Headphones& other)
{
	return m_model==other.m_model && m_brand==other.m_brand && m_driverSize==other.m_driverSize 
&& m_quantity==other.m_quantity && m_price==other.m_price && m_impedance==other.m_impedance;
}

ostream& operator<<(ostream& os, const Headphones& t)
{
	os << "Headphones [ID#" << t.m_id << ", Brand=" << t.m_brand << ", Model=" << t.m_model << ", Driver Size= " << t.m_driverSize 
       << ", Impedance(Ohms)=" << t.m_impedance << ", Quantity= " << t.m_quantity << ", Price=$" << t.m_price << "]";
	return os;
}
