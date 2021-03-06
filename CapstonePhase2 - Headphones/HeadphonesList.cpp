#include "HeadphonesList.h"

bool HeadphonesList::addTech (Headphones th)
{
    if (m_count >= SIZE -1)
        return false;

    m_list[m_count++] = th;
        return true;
  
}
bool HeadphonesList::removeTech (int id)
{
    for (int i=0; i < m_count; i++)
    {
        if (m_list[i].getId()==id)
        {
            for (int j=i; j<m_count; j++)
            {
                m_list[j]=m_list[j+1];
            }
            m_count--;
            return true;
        }
    }
    return false;

}
bool HeadphonesList::updateTech(int id, string model, string brand, string driverSize, int quantity, double price, int impedance)
{
    //loop through list to find id
    for (int i = 0; i < m_count; i++)
    {
        if (id==m_list[i].getId())
        {
            m_list[i].setBrand(brand);
            m_list[i].setModel(model);
            m_list[i].setDriverSize(driverSize);
            m_list[i].setQuantity(quantity);
            m_list[i].setImpedance(impedance);
            m_list[i].setPrice(price);
            return true;
        }
    }
    return false;


}
ostream& operator<<(ostream& os, const HeadphonesList& th)
{
    os << "~~~Current Inventory of Headphones~~~\n\n";
    for (int i=0; i<th.m_count; i++)
        os << th.m_list[i] << endl;

    return os;
}
