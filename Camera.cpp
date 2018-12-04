#include "Camera.h"
#include <string>

int Camera::c_nextId = 10000;
Camera::Camera()
{
	m_id = 0;
	m_name = "";
	m_brand = "";
	m_price = 0.0;
	m_quantity = 0;
	m_date = 0;

}
Camera::Camera(string name, string brand, double price = 0.0, int quantity = 0, int date = 0)
{
    m_id = c_nextId++;
	m_name = name;
	m_brand = brand;
	m_price = price;
	m_quantity = quantity;
	m_date = date;
}

bool Camera::operator==(const Camera& other)
{
	return m_name == other.m_name && m_brand == other.m_brand && m_price == other.m_price && m_quantity == other.m_quantity && m_date == other.m_date;
}

ostream& operator<<(ostream& os, const Camera& c)
{
	os << "Camera[ID#" << c.m_id << ", Camera Name = " << c.m_name << ", Brand Name = " << c.m_brand << ", price =" << c.m_price
		<< ", item quantity =" << c.m_quantity << ", date =" << c.m_date << "]";
	return os;
}
