#include "Headphones.h"
#include <string>

Headphones::Headphones() : TechProduct()
{
    
         m_driverSize="";
         m_impedance=0;
}

Headphones::Headphones(string model, string brand, string driverSize, int quantity, double price, int impedance) : TechProduct(brand, model, price, quantity)
{
    m_driverSize=driverSize;
    m_impedance=impedance;
}

bool Headphones::operator==(const Headphones& other)
{
	return
        m_model == other.getModel() &&
        m_brand == other.getBrand() &&
        m_quantity == other.getQuantity() &&
        m_price == other.getPrice() &&
		m_driverSize == other.m_driverSize &&
        m_impedance == other.m_impedance;
}

ostream& operator<<(ostream& os, const Headphones& t)
{
	os << "Headphones [ID#" << t.m_id << ", Brand=" << t.m_brand << ", Model=" << t.m_model << ", Driver Size= " << t.m_driverSize 
       << ", Impedance(Ohms)=" << t.m_impedance << ", Quantity= " << t.m_quantity << ", Price=$" << t.m_price << "]";
	return os;
}
void Headphones::print()
{
    cout << "Headphones [ID#" << m_id << ", Brand=" << m_brand << ", Model=" << m_model << ", Driver Size= " << m_driverSize 
       << ", Impedance(Ohms)=" << m_impedance << ", Quantity= " << m_quantity << ", Price=$" << m_price << "]";
}
void Headphones::update() 
{
    string model, brand, driverSize;
    int quantity, impedance;
    double price;

			cout << "Enter Updated Brand: ";
			getline(cin,brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated Driver Size (small, medium, large): ";
			getline(cin, driverSize);
            cout << "Enter Updated Impedance(Ohms): ";
			cin >> impedance;
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Price $";
			cin >> price;

            setBrand(brand);
            setModel(model);
            setDriverSize(driverSize);
            setImpedance(impedance);
            setQuantity(quantity);
            setPrice(price);
            
}
