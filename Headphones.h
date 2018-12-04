#ifndef HEADPHONES_H
#define HEADPHONES_H

#include <iostream>

using namespace std;

class Headphones
{
    private:
        static int inventorySize;
        static int t_nextId;
        int m_id;
        string m_model;
        string m_brand;
        string m_driverSize;
        int m_quantity;
        double m_price;
        int m_impedance;
    public:
        Headphones();
        Headphones(string model, string brand, string driverSize, int quantity, double price, int impedance);
        
        inline int getId() const { return m_id; }
        inline string getBrand() const { return m_brand; }
	    inline string getModel() const { return m_model; }
        inline string getDriverSize() const { return m_driverSize; }
	    inline int getQuantity() const { return m_quantity; }
        inline double getPrice() const { return m_price; }
        inline int getImpedance() const { return m_impedance; }

    	inline void setBrand(string brand) { m_brand = brand; }
    	inline void setModel(string model) { m_model = model; }
        inline void setDriverSize(string driverSize) { m_driverSize = driverSize; }
    	inline void setQuantity(int quantity) { m_quantity = quantity; }
    	inline void setPrice(double price) { m_price = price; }
        inline void setImpedance(int impedance) { m_impedance = impedance; }
    	
	    bool operator==(const Headphones& other);
	    ostream operator<<(const Headphones& other);
        friend ostream& operator<<(ostream& os, const Headphones& t);
        
};
#endif
