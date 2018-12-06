#ifndef DRONE_H
#define DRONE_H

#include <iostream>
#include "TechProduct.h"

using namespace std;

class Drone:public TechProduct
{
private:
	
	double m_timePerCharge;
	string m_camera;
	double m_signalDiameter;
	

public:
	Drone();
	Drone(string brand, string model, double time, double diameter, string camera, double price, int quantity);
	inline double getTimePerCharge() const { return m_timePerCharge; }
	inline string getCamera() const { return m_camera; }
	inline double getSignalDiameter() const { return m_signalDiameter; }
	void update();
	inline void setTimePerCharge(double time) { m_timePerCharge = time; }
	inline void setCamera(string camera) { m_camera = camera; }
	inline void setSignalDiameter(double diameter) { m_signalDiameter = diameter; }

	bool operator==(const Drone& other);

	void print();
};

#endif
