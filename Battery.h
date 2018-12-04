#ifndef BATTERY_H
#define BATTERY_H

#include <iostream>

using namespace std;

class Battery
{
private:
    static int b_nextId;
	int m_id;
	string m_model;
	string m_brand;
	double m_price;
	int m_quantity; 
	int m_capacity;
	
public:
	Battery();
	Battery(string, string, double, int, int);
	inline int getId() const { return m_id; }
	inline string getModel() const { return m_model; }
	inline string getBrand() const { return m_brand; }
	inline double getPrice() const { return m_price; }
	inline int getQuantity() const { return m_quantity; }
	inline int getCapacity() const { return m_capacity; }

	inline void setModel(string model) { m_model = model; }
	inline void setBrand(string brand) { m_brand = brand; }
	inline void setPrice(double price) { m_price = price; }
	inline void setQuantity(int quantity) { m_quantity = quantity; }
	inline void setCapacity(int capacity) { m_capacity = capacity; }
	

	bool operator==(const Battery& other);
	ostream operator<<(const Battery& other);

	friend ostream& operator<<(ostream& os, const Battery& b);
};
#endif
