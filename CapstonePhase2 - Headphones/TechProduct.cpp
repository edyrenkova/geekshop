#include "TechProduct.h"
#include <string>
#include <iostream>
int TechProduct::s_nextId = 10000;

TechProduct::TechProduct()
{
	m_id = 0;
	m_brand = "";
	m_model = "";
	m_quantity=0; 
	m_price=0;
}
TechProduct::TechProduct(string brand, string model, double price=0, int quantity=0)
{
	m_id = ++s_nextId;
	m_brand = brand;
	m_model = model;
	m_quantity=quantity; 
	m_price=price;
}

void TechProduct::update(){
    string brand, model;
    int quantity;
    double price;
    cin.ignore(INT_MAX, '\n');
			cout << "\nEnter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Price $";
			cin >> price;
			setBrand(brand);
			setModel(model);
			setPrice(price);
			setQuantity(quantity);
}
