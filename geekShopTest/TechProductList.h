#ifndef TECHPRODUCTLIST_H
#define TECHPRODUCTLIST_H

#include "TechProduct.h"
#include <iostream>
#include <vector>

using namespace std;

class TechProductList
{        
    public:
        TechProductList();
        virtual bool add();
        virtual bool remove(int id);
        virtual bool update(int id);
        virtual void print();
        
};
#endif
