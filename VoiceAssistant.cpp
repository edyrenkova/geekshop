#include "VoiceAssistant.h"
#include <string>

int VoiceAssistant::s_nextId = 20000;

VoiceAssistant::VoiceAssistant()
{
	m_id = 0;
	m_brand = "";
	m_model = "";
    m_searchEngine="";
	m_color="";
	m_weight=0.0;
	m_quantity=0; 
	m_price=0;
}
VoiceAssistant::VoiceAssistant(string brand, string model, string searchEngine, string color, double weight, double price, int quantity)
{
	m_id = ++s_nextId;
	m_brand = brand;
	m_model = model;
    m_searchEngine=searchEngine;
	m_color=color;
	m_weight=weight;
	m_quantity=quantity; 
	m_price=price;
}

bool VoiceAssistant::operator==(const VoiceAssistant& other) //compares only brand, model, color and price. Those should be enough to identify the same model of Voice Assistant.
{
	return m_brand == other.m_brand && m_model == other.m_model && m_color == other.m_color
	&& m_price == other.m_price;
}

ostream& operator<<(ostream& os, const VoiceAssistant& d)
{
	os << "Voice Assistant [ID#" << d.m_id << ", Brand=" << d.m_brand << ", Model=" << d.m_model << ", Search Engine=" << d.m_searchEngine
		<< ", Color=" << d.m_color << ", Weight=" << d.m_weight << " pounds, Quantity=" << d.m_quantity
		<< ", Price=$" << d.m_price << "]";
	return os;
}
