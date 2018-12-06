#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>

using namespace std;

class Camera
{
private:
 
	string m_aperture;
	
public:
	Camera();
	Camera(string, string, double, int, string);
	inline string getAperture() const { return m_aperture; }

	inline void setModel(string model) { m_model = model; }
	inline void setBrand(string brand) { m_brand = brand; }
	inline void setPrice(double price) { m_price = price; }
	inline void setQuantity(int quantity) { m_quantity = quantity; }
	inline void setAperture(string aperture) { m_aperture = aperture; }
	

	bool operator==(const Camera& other);
	ostream operator<<(const Camera& other);

	friend ostream& operator<<(ostream& os, const Camera& c);
};

#endif
