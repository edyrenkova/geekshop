#ifndef TECHPRODUCTLIST_H
#define TECHPRODUCTLIST_H

#include "TechProduct.h"
#include <iostream>

using namespace std;

class TechProductList
{
    private:
        int m_count;
        const static int SIZE=100;
        TechProduct m_list[SIZE];
        
    public:
        TechProductList();
        bool addTechProduct(TechProduct d);
        bool removeTechProduct(int id);
        bool updateTechProduct(int id);
};
#endif
