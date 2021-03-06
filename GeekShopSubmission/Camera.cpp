#include "Camera.h"
#include <string>

Camera::Camera():TechProduct()
{
	m_aperture = "";
}

Camera::Camera(string model, string brand, double price = 0.0, int quantity = 0, string aperture = ""):TechProduct::TechProduct(brand, model, price, quantity)
{
	m_aperture = aperture;
}

bool Camera::operator==(const Camera& other)
{
	return m_model == other.m_model && m_brand == other.m_brand && m_price == other.m_price && m_quantity == other.m_quantity && m_aperture == other.m_aperture;
}

void Camera::print()
{
	cout << "Camera[ID#" << m_id << ", Camera Model = " << m_model << ", Brand Name = " << m_brand << ", price =" << m_price
		<< ", item quantity =" << m_quantity << ", aperture =" << m_aperture << "]";
}
void Camera::update(){
    string brand, model, aperture;
    double price;
    int quantity;
    cin.ignore(INT_MAX, '\n');
			cout << "\nEnter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Aperture";
			cin >> aperture;
			cout << "Enter Updated Price $";
			cin >> price;
		    setBrand(brand);
			setModel(model);
			setQuantity(quantity);
			setAperture(aperture);
			setPrice(price);
        }
