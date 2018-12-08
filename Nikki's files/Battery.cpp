#include "Battery.h"
#include <string>


Battery::Battery()
{
	m_capacity = 0;
}

Battery::Battery(string brand, string model, double price = 0.0 , int quantity=0, int capacity = 0 ):TechProduct::TechProduct(brand, model, price, quantity)
{
	m_capacity = capacity;
}

bool  Battery::operator==(const Battery& other)
{
	return m_model == other.m_model && m_brand == other.m_brand && m_price == other.m_price && m_quantity == other.m_quantity && m_capacity == other.m_capacity;
}


void Drone::print()
{
	os << "Battery[ID#" << b.m_id << ", Battery Model = " << b.m_model << ", Brand Name = " << b.m_brand << ", price =" << b.m_price
		<< ", item quantity =" << b.m_quantity << "Capacity =" << b.m_capacity << "]";
	return os;
}
void Battery::update(){
    string brand, model;
    double price;
    int quantity, capacity;
    cin.ignore(INT_MAX, '\n');
			cout << "\nEnter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Capacity";
			cin >> capacity;
			cout << "Enter Updated Price $";
			cin >> price;
		    setBrand(brand);
			setModel(model);
			setQuantity(quantity);
			setCapacity(capacity);
			setPrice(price);
