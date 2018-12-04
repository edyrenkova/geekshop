#ifndef LAPTOPSLIST_H
#define LAPTOPSLIST_H
#include "Laptops.h"

using namespace std;
#include <iostream>

class LaptopsList
{
    private:
        const static int SIZE = 100;
        int m_count;
        Laptops m_list[SIZE];
    public:
        LaptopsList() { m_count = 0; }
        bool addTech(Laptops th);
        bool removeTech (int id);
        bool updateTech(int id, string model, string brand, string cpu, int quantity, double price, int storage);
        
        friend ostream& operator<<(ostream& os, const LaptopsList& th);


};

#endif
