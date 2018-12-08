#include "Laptops.h"
#include <string>

int Laptops::inventorySize=100;
int Laptops::t_nextId=10000;

Laptops::Laptops() : TechProduct()
{

         m_cpu="";
         m_storage=0;
}

Laptops::Laptops(string model, string brand, string cpu, int quantity, double price, int storage) : TechProduct(brand, model, price, quantity)
{
    m_cpu=cpu;
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
void Laptops::print()
{
    cout << "Laptops [ID#" << m_id << ", Brand=" << m_brand << ", Model=" << m_model << ", CPU name= " << m_cpu 
       << ", Storage(GB)=" << m_storage << ", Quantity= " << m_quantity << ", Price=$" << m_price << "]";;
}
void Laptops::update() 
{
    string model, brand, cpu;
    int quantity, storage;
    double price;

	       	cout << "Enter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated CPU description: ";
			getline(cin, cpu);
            cout << "Enter Updated Storage(Ohms): ";
			cin >> storage;
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Price $";
			cin >> price;

            setBrand(brand);
            setModel(model);
            setCpu(cpu);
            setStorage(storage);
            setQuantity(quantity);
            setPrice(price);
            
}
