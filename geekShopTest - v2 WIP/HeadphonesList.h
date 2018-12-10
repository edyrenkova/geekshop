#ifndef HEADPHONESLIST_H
#define HEADPHONESLIST_H
#include "Headphones.h"

using namespace std;
#include <iostream>

class HeadphonesList
{
    private:
        const static int SIZE = 100;
        int m_count;
        Headphones m_list[SIZE];
    public:
        HeadphonesList() { m_count = 0; }
        bool addTech(Headphones th);
        bool removeTech (int id);
        bool updateTech(int id, string model, string brand, string driverSize, int quantity, double price, int impedance);
        
        friend ostream& operator<<(ostream& os, const HeadphonesList& th);


};

#endif
