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


bool BatteryList::updateBattery(int id, string model, string brand, double price, int quantity, int capacity)
{
    for (int i = 0; i < m_count; i++)
    {
        if (id == m_list[i].getId())
        {
            m_list[i].setModel(model);
            m_list[i].setBrand(brand);
            m_list[i].setPrice(price);
            m_list[i].setQuantity(quantity);
            m_list[i].setCapacity(capacity);
            return true;   
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const BatteryList& ba)
{
    os << "~~~Current Inventory of Batteries~~~\n\n";
    for(int i = 0; i < ba.m_count; i ++)
    os << ba.m_list[i] << endl;
    return os;
}
