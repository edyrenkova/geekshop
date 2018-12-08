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
	Battery(string brand, string model, double price, int quantity, int capacity);
	inline int getCapacity() const { return m_capacity; }
	void update();
	inline void setCapacity(int capacity) { m_capacity = capacity; }
	

	bool operator==(const Battery& other);

	void print();
};
#endif
