#ifndef TECHPRODUCT_H
#define TECHPRODUCT_H

#include <iostream>

using namespace std;

class TechProduct
{
protected:
	static int s_nextId;
	int m_id;
	string m_brand;
	string m_model;
	int m_quantity; 
	double m_price;
	TechProduct();
	TechProduct(string brand, string model, double price, int quantity);
	

public:
    static const int MAX_INVENTORY=100;
	inline int getId() const { return m_id; }
	inline string getBrand() const { return m_brand; }
	inline string getModel() const { return m_model; }
	inline double getPrice() const { return m_price; }
	inline int getQuantity() const { return m_quantity; }

	inline void setBrand(string brand) { m_brand = brand; }
	inline void setModel(string model) { m_model = model; }
	inline void setPrice(double price) { m_price = price; }
	inline void setQuantity(int quantity) { m_quantity = quantity; }
};

#endif
