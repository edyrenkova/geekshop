#include "VoiceAssistant.h"

VoiceAssistant::VoiceAssistant() : TechProduct()
{
    m_searchEngine="";
	m_color="";
	m_weight=0.0;
}
VoiceAssistant::VoiceAssistant(string brand, string model, string searchEngine, string color, double weight, double price, int quantity):TechProduct::TechProduct(brand,model,price,quantity)
{
    m_searchEngine=searchEngine;
	m_color=color;
	m_weight=weight;
}

bool VoiceAssistant::operator==(const VoiceAssistant& other) //compares only brand, model, color and price. Those should be enough to identify the same model of Voice Assistant.
{
	return m_brand == other.m_brand && m_model == other.m_model && m_color == other.m_color
	&& m_price == other.m_price;
}

void VoiceAssistant::update(){
     string brand, model, searchEngine, color;
     double weight, price;
    int quantity;
    cin.ignore(INT_MAX, '\n');
			cout << "\nEnter Updated Brand: ";
			getline(cin, brand);
			cout << "Enter Updated Model: ";
			getline(cin, model);
			cout << "Enter Updated Search Engine: ";
			getline(cin, searchEngine);
			cout << "Enter Updated Color: ";
			cin >> color;
			cout << "Enter Updated weight: ";
			cin >> weight;
			cout << "Enter Updated Quantity: ";
			cin >> quantity;
			cout << "Enter Updated Price $";
			cin >> price;
		    setBrand(brand);
			setModel(model);
			setSearchEngine(searchEngine);
			setWeight(weight);
			setColor(color);
			setPrice(price);
			setQuantity(quantity);
}

ostream& operator<<(ostream& os, const VoiceAssistant& va){
    os<< "Voice Assistant [ID#" << va.m_id << ", Brand=" << va.m_brand << ", Model=" << va.m_model << ", Search Engine=" << va.m_searchEngine
		<< ", Color=" << va.m_color << ", Weight=" << va.m_weight << " pounds, Quantity=" << va.m_quantity
		<< ", Price=$" << va.m_price << "]";
		return os;
}
