#include "BatteryList.h"

bool BatteryList::addBattery(Battery ba)
{
    if(m_count >= SIZE - 1)
    return false;
    
    m_list[m_count++] = ba;
    return true;
    
}

bool BatteryList::removeBattery(int id)
{
    for ( int i =0; i < m_count; i++)
    {
        if(m_list[i].getId() == id)
        {
            for(int j = i; j < m_count; j++)
            {
                m_list[j] = m_list[j + 1];
                m_count--;
                return true;
            }
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const BatteryList& ba)
{
    os << "~~~Current Inventory of Camera~~~\n\n";
    for(int i = 0; i < ba.m_count; i ++)
    os << ba.m_list[i] << endl;
    return os;
}
