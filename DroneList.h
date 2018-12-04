#ifndef DRONELIST_H
#define DRONELIST_H

#include "Drone.h"
#include <iostream>

using namespace std;

class DroneList
{
    private:
        int m_count;
        const static int SIZE=100;
        Drone m_list[SIZE];
        
    public:
        DroneList();
        bool addDrone(Drone d);
        bool removeDrone(int id);
        bool updateDrone(int id);
        friend ostream& operator<<(ostream&, const DroneList&);
};
#endif
