#ifndef VOICEASSISTANT_H
#define VOICEASSISTANT_H

#include <string>
#include <iostream>
#include "TechProduct.h"

using namespace std;

class VoiceAssistant:public TechProduct
{
private:
	string m_searchEngine;
	string m_color;
	double m_weight;

public:
    static const int MAX_INVENTORY=100;
	VoiceAssistant();
	VoiceAssistant(string brand, string model, string searchEngine, string color, double weight, double price, int quantity);
	inline string getSearchEngine() const { return m_searchEngine; }
	inline string getColor() const { return m_color; }
	inline double getWeight() const { return m_weight;}
	void update();
 	inline void setSearchEngine(string searchEngine) { m_searchEngine = searchEngine; }
	inline void setColor(string color) { m_color = color; }
	inline void setWeight(double weight) { m_weight = weight; }

	bool operator==(const VoiceAssistant& other);

	friend ostream& operator<<(ostream& os, const VoiceAssistant& s);
};

#endif
