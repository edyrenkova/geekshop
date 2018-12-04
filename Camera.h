#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>

using namespace std;

class Camera
{
private:
    static int c_nextId;
	int m_id;
	string m_name;
	string m_brand;
	double m_price;
	int m_quantity; 
	int m_date;
	

public:
	Camera();
	Camera(string, string, double, int, int);
	inline int getId() const { return m_id; }
	inline string getName() const { return m_name; }
	inline string getBrand() const { return m_brand; }
	inline double getPrice() const { return m_price; }
	inline int getQuantity() const { return m_quantity; }
	inline int getDate() const { return m_date; }

	inline void setName(int name) { m_name = name; }
	inline void setBrand(string brand) { m_brand = brand; }
	inline void setPrice(double price) { m_price = price; }
	inline void setQuantity(int quantity) { m_quantity = quantity; }
	inline void setDate(int date) { m_date = date; }
	

	bool operator==(const Camera& other);
	ostream operator<<(const Camera& other);

	friend ostream& operator<<(ostream& os, const Camera& c);
};

#endif
