#include "Battery.h"
#include <string>

int Battery::b_nextId = 10000;
Battery::Battery()
{
	m_id = 0;
	m_name = "";
	m_brand = "";
	m_price = 0.0;
	m_quantity = 0;
	m_date = 0;

}
Battery::Battery(string name, string brand, double price = 0.0, int quantity = 0, int date = 0)
{
    m_id = b_nextId++;
	m_name = name;
	m_brand = brand;
	m_price = price;
	m_quantity = quantity;
	m_date = date;
}

bool Battery::operator==(const Battery& other)
{
	return m_name == other.m_name && m_brand == other.m_brand && m_price == other.m_price && m_quantity == other.m_quantity && m_date == other.m_date;
}

ostream& operator<<(ostream& os, const Battery& b)
{
	os << "Battery[ID#" << b.m_id << ", Battery Name = " << b.m_name << ", Brand Name = " << b.m_brand << ", price =" << b.m_price
		<< ", item quantity =" << b.m_quantity << ", date =" << b.m_date << "]";
	return os;
}
