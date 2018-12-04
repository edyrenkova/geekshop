#ifndef VOICEASSISTANT_H
#define VOICEASSISTANT_H

#include <iostream>

using namespace std;

class VoiceAssistant
{
private:
	static int s_nextId;
	int m_id;
	string m_brand;
	string m_model;
	string m_searchEngine;
	string m_color;
	double m_weight;
	int m_quantity; 
	double m_price;
	

public:
    static const int MAX_INVENTORY=100;
	VoiceAssistant();
	VoiceAssistant(string brand, string model, string searchEngine, string color, double weight, double price, int quantity);
	inline int getId() const { return m_id; }
	inline string getBrand() const { return m_brand; }
	inline string getModel() const { return m_model; }
	inline string getSearchEngine() const { return m_searchEngine; }
	inline string getColor() const { return m_color; }
	inline double getWeight() const { return m_weight; }
	inline double getPrice() const { return m_price; }
	inline int getQuantity() const { return m_quantity; }

	inline void setBrand(string brand) { m_brand = brand; }
	inline void setModel(string model) { m_model = model; }
	inline void setSearchEngine(string searchEngine) { m_searchEngine = searchEngine; }
	inline void setColor(string color) { m_color = color; }
	inline void setWeight(double weight) { m_weight = weight; }
	inline void setPrice(double price) { m_price = price; }
	inline void setQuantity(int quantity) { m_quantity = quantity; }

	bool operator==(const VoiceAssistant& other);

	friend ostream& operator<<(ostream& os, const VoiceAssistant& s);
};

#endif
