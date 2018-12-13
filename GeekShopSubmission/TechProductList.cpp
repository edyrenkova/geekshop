#include "TechProductList.h"
#include <iostream>

using namespace std;
TechProductList::TechProductList(){
    m_count=0;
}
bool TechProductList::addTechProduct(TechProduct *d){
    if(m_count<SIZE){
        m_count++;
        m_list[m_count-1]=d;
        return true;
    }
    else{
        return false;
    }
}

bool TechProductList::removeTechProduct(int id){
    int index;
    bool found=false;
    for(int i=0;i<SIZE;i++){
        if(m_list[i]->getId()==id){
            index=i;
            found=true;
            break;
        }
    }
    if(found){
        m_count--;
        for(int i=index;i<SIZE-1;i++){
            m_list[i]=m_list[i+1];
        }
    }
    return found;
}
bool TechProductList::updateTechProduct(int id){
    string brand, model, color, search;
	double weight, price;
	int quantity;
    for(int i=0;i<m_count;i++){
        if(m_list[i]->getId()==id){
            m_list[i]->update();
            return true;
        }
    }
    return false;
}

void TechProductList::print(){
    for(int i=0;i<m_count;i++){
        m_list[i]->print();
    }
}
