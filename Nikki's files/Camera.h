#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
#include "TechProduct.h"

using namespace std;

class Camera:public TechProduct
{
private:
 
	string m_aperture;
	
public:
	Camera();
	Camera(string brand, string model, double price, int quantity, string aperture);
	inline string getAperture() const { return m_aperture; }
	void update();
	inline void setAperture(string aperture) { m_aperture = aperture; }

	bool operator==(const Camera& other);

	void print();
};

#endif
