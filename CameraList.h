#ifndef CAMERALIST_H
#define CAMERALIST_H

#include "Camera.h"
#include <iostream>

using namespace std;
class CameraList
{
    private:
    const static int SIZE = 100;
    int m_count;
    Camera m_list[SIZE];
    
    public:
        CameraList() { m_count = 0;}
        bool addCamera(Camera ca);
        bool removeCamera(int id);
        
    friend ostream& operator<<(ostream& os, const CameraList& ca);
    
};
#endif
