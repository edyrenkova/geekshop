#ifndef DRONE_H
#define DRONE_H

#include <iostream>

using namespace std;

class Drone
{
private:
	static int s_nextId;
	int m_id;
	string m_brand;
	string m_model;
	double m_timePerCharge;
	string m_camera;
	double m_signalDiameter;
	int m_quantity; 
	double m_price;
	

public:
    static const int MAX_INVENTORY=100;
	Drone();
	Drone(string brand, string model, double time, double diameter, string camera, double price, int quantity);
	inline int getId() const { return m_id; }
	inline string getBrand() const { return m_brand; }
	inline string getModel() const { return m_model; }
	inline double getTimePerCharge() const { return m_timePerCharge; }
	inline string getCamera() const { return m_camera; }
	inline double getSignalDiameter() const { return m_signalDiameter; }
	inline double getPrice() const { return m_price; }
	inline int getQuantity() const { return m_quantity; }

	inline void setBrand(string brand) { m_brand = brand; }
	inline void setModel(string model) { m_model = model; }
	inline void setTimePerCharge(double time) { m_timePerCharge = time; }
	inline void setCamera(string camera) { m_camera = camera; }
	inline void setSignalDiameter(double diameter) { m_signalDiameter = diameter; }
	inline void setPrice(double price) { m_price = price; }
	inline void setQuantity(int quantity) { m_quantity = quantity; }

	bool operator==(const Drone& other);

	friend ostream& operator<<(ostream& os, const Drone& s);
};

#endif
