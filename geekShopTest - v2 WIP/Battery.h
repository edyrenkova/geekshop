#ifndef BATTERY_H
#define BATTERY_H

#include "TechProduct.h"
#include <iostream>

using namespace std;

class Battery:public TechProduct
{
private:
	int m_capacity;
	
public:
	Battery();
	Battery(string brand, string model, double price, int quantity, int capacity);
	inline int getCapacity() const { return m_capacity; }
	void update();
	inline void setCapacity(int capacity) { m_capacity = capacity; }
	bool operator==(const Battery& other);
	virtual void print();
};
#endif
