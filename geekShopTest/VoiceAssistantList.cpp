#include "VoiceAssistantList.h"
#include <iostream>
using namespace std;
VoiceAssistantList::VoiceAssistantList(){
    m_count=0;
}
void VoiceAssistantList::addVoiceAssistant(){
    
    int quantity;
    string model, brand, color, searchEngine;
    double price, weight;
    cin.ignore(INT_MAX, '\n');
	cout << "Enter Brand: ";
	getline(cin, brand);
	cout << "Enter Model: ";
	getline(cin, model);
	cout << "Enter Search Engine: ";
	getline(cin, searchEngine);
	cout << "Enter Color: ";
	cin >> color;
	cout << "Enter Weight: ";
	cin >> weight;
	cout << "Enter Quantity: ";
	cin >> quantity;
	cout << "Enter Price $";
	cin >> price;
	VoiceAssistant d(brand, model, searchEngine, color, weight, price, quantity);
    if(m_count<SIZE){
        m_list[m_count++]=d;
        cout<<"Added!\n";
    }
    else{
        cout<<"No more room!\n";
    }
}

bool VoiceAssistantList::removeVoiceAssistant(int id){
    int index;
    bool found=false;
    for(int i=0;i<SIZE;i++){
        if(m_list[i].getId()==id){
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

bool VoiceAssistantList::updateVoiceAssistant(int id){
    string brand, model, color, search;
	double weight, price;
	int quantity;
    for(int i=0;i<m_count;i++){
        if(m_list[i].getId()==id){
            m_list[i].update();
            return true;
        }
    }
    return false;
}

ostream& operator<<(ostream& os, const VoiceAssistantList& va){
    for(int i=0;i<va.m_count;i++){
        os<<va.m_list[i]<<endl;
    }
    return os;
}
