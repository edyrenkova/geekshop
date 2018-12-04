#include "CameraList.h"

bool CameraList::addCamera(Camera ca)
{
    if(m_count >= SIZE - 1)
    return false;
    
    m_list[m_count++] = ca;
    return true;
    
}

bool CameraList::removeCamera(int id)
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


bool CameraList::updateCamera(int id, string model, string brand, double price, int quantity, string aperture)
{
    for (int i = 0; i < m_count; i++)
    {
        if (id == m_list[i].getId())
        {
            m_list[i].setModel(model);
            m_list[i].setBrand(brand);
            m_list[i].setPrice(price);
            m_list[i].setQuantity(quantity);
            m_list[i].setAperture(aperture);
            return true;   
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const CameraList& ca)
{
    os << "~~~Current Inventory of Cameras~~~\n\n";
    for(int i = 0; i < ca.m_count; i ++)
    os << ca.m_list[i] << endl;
    return os;
}
