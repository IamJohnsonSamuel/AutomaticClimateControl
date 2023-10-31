
#include "iostream"

#ifndef __TEMP_CALCULATOR__
#define __TEMP_CALCULATOR__

class TempCalculator
{
private:
    int getOutsideTemp();
    int getOccupancyCount();
    int getTempFromOutsideAndOccupancy(int outside, int occupancy);

public:
    int getTemperature();
};

#endif
