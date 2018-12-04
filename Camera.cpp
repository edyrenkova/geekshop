#include "Camera.h"
#include <string>

int Camera::c_nextId = 10000;
Camera::Camera()
{
	m_id = 0;
	m_model = "";
	m_brand = "";
	m_price = 0.0;
	m_quantity = 0;
	m_aperture = "";
}

Camera::Camera(string model, string brand, double price = 0.0, int quantity = 0, string aperture = "")
{
    m_id = c_nextId++;
	m_model = model;
	m_brand = brand;
	m_price = price;
	m_quantity = quantity;
	m_aperture = aperture;
}

bool Camera::operator==(const Camera& other)
{
	return m_model == other.m_model && m_brand == other.m_brand && m_price == other.m_price && m_quantity == other.m_quantity && m_aperture == other.m_aperture;
}

ostream& operator<<(ostream& os, const Camera& c)
{
	os << "Camera[ID#" << c.m_id << ", Camera Model = " << c.m_model << ", Brand Name = " << c.m_brand << ", price =" << c.m_price
		<< ", item quantity =" << c.m_quantity << ", aperture =" << c.m_aperture << "]";
	return os;
}
