#include "TechProduct.h"
#ifndef LAPTOPS_H
#define LAPTOPS_H

#include <iostream>

using namespace std;

class Laptops : public TechProduct
{
    private:
        static int inventorySize;
        static int t_nextId;
        int m_id;
        string m_model;
        string m_brand;
        string m_cpu;
        int m_quantity;
        double m_price;
        int m_storage;
    public:
        Laptops();
        Laptops(string model, string brand, string cpu, int quantity, double price, int storage);
        
        inline int getId() const { return m_id; }
        inline string getBrand() const { return m_brand; }
	    inline string getModel() const { return m_model; }
        inline string getCpu() const { return m_cpu; }
	    inline int getQuantity() const { return m_quantity; }
        inline double getPrice() const { return m_price; }
        inline int getStorage() const { return m_storage; }

    	inline void setBrand(string brand) { m_brand = brand; }
    	inline void setModel(string model) { m_model = model; }
        inline void setCpu(string cpu) { m_cpu = cpu; }
    	inline void setQuantity(int quantity) { m_quantity = quantity; }
    	inline void setPrice(double price) { m_price = price; }
        inline void setStorage(int storage) { m_storage = storage; }
    	
	    bool operator==(const Laptops& other);
	    ostream operator<<(const Laptops& other);
        friend ostream& operator<<(ostream& os, const Laptops& t);
        
};
#endif
