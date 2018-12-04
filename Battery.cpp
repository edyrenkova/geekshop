#include "Battery.h"
#include <string>

int Battery::b_nextId = 10000;
Battery::Battery()
{
	m_id = 0;
	m_model = "";
	m_brand = "";
	m_price = 0.0;
	m_quantity = 0;
	m_capacity = 0;
}

Battery::Battery(string model, string brand, double price = 0.0, int quantity = 0, int capacity = 0)
{
    m_id = b_nextId++;
	m_model = model;
	m_brand = brand;
	m_price = price;
	m_quantity = quantity;
	m_capacity = capacity;
}

bool  Battery::operator==(const Battery& other)
{
	return m_model == other.m_model && m_brand == other.m_brand && m_price == other.m_price && m_quantity == other.m_quantity && m_capacity == other.m_capacity;
}


ostream& operator<<(ostream& os, const Battery& b)
{
	os << "Battery[ID#" << b.m_id << ", Battery Model = " << b.m_model << ", Brand Name = " << b.m_brand << ", price =" << b.m_price
		<< ", item quantity =" << b.m_quantity << ", date =" << b.m_capacity << "]";
	return os;
}
