
#include "iostream"
#include "ITempCalculator.h"

#ifndef __TEMP_CALCULATOR__
#define __TEMP_CALCULATOR__

class OutsideTemp
{

public:
    int getOutsideTemp();
};

class OccupencySensor
{

public:
    int getOccupancyCount();
};

class TempCalculator : public ITempCalculator
{
private:
    OutsideTemp outsideTempObj;
    OccupencySensor occupencyObj;

    int getTempFromOutsideAndOccupancy(int outside, int occupancy);

public:
    int getTemperature();
};

#endif
