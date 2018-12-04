#ifndef BATTERYLIST_H
#define BATTERYLIST_H

#include "Battery.h"
#include <iostream>

using namespace std;
class BatteryList
{
    private:
    const static int SIZE = 100;
    int m_count;
    Battery m_list[SIZE];
    
    public:
        BatteryList() { m_count = 0;}
        bool addBattery(Battery ba);
        bool removeBattery(int id);
        
    friend ostream& operator<<(ostream& os, const BatteryList& ba);
    
};
#endif
