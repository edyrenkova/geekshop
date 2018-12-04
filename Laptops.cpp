#include "Laptops.h"
#include <string>

int Laptops::inventorySize=100;
int Laptops::t_nextId=10000;

Laptops::Laptops()
{
         m_id=0;
         m_model="";
         m_brand="";
         m_cpu="";
         m_quantity=0;
         m_price=0.0;
         m_storage=0;
}

Laptops::Laptops(string model, string brand, string cpu, int quantity, double price, int storage)
{
    m_id = t_nextId++;
    m_model=model;
    m_brand=brand;
    m_cpu=cpu;
    m_quantity=quantity;
    m_price=price;
    m_storage=storage;
}

bool Laptops::operator==(const Laptops& other)
{
	return m_model==other.m_model && m_brand==other.m_brand && m_cpu==other.m_cpu 
&& m_quantity==other.m_quantity && m_price==other.m_price && m_storage==other.m_storage;
}

ostream& operator<<(ostream& os, const Laptops& t)
{
	os << "Laptops [ID#" << t.m_id << ", Brand=" << t.m_brand << ", Model=" << t.m_model << ", CPU name= " << t.m_cpu 
       << ", Storage(GB)=" << t.m_storage << ", Quantity= " << t.m_quantity << ", Price=$" << t.m_price << "]";
	return os;
}
