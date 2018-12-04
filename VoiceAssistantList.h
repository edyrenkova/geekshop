#ifndef VOICEASSISTANTLIST_H
#define VOICEASSISTANTLIST_H

#include "VoiceAssistant.h"
#include <iostream>

using namespace std;

class VoiceAssistantList
{
    private:
        int m_count;
        const static int SIZE=100;
        VoiceAssistant m_list[SIZE];
        
    public:
        VoiceAssistantList();
        bool addVoiceAssistant(VoiceAssistant d);
        bool removeVoiceAssistant(int id);
        bool updateVoiceAssistant(int id);
        friend ostream& operator<<(ostream&, const VoiceAssistantList&);
};
#endif
