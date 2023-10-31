#include "TempCalculator.h"

int TempCalculator::getOutsideTemp()
{
    int outside = 0;

    return outside;
}

int TempCalculator::getOccupancyCount()
{
    int occupancy = 0;

    return occupancy;
}

int TempCalculator::getTempFromOutsideAndOccupancy(int outside, int occupancy)
{
    int currentTemp = 0;
    return currentTemp;
}

int TempCalculator::getTemperature()
{
    int outsideTemp = getOutsideTemp();
    int occupancyCount = getOccupancyCount();

    int currentTemp = getTempFromOutsideAndOccupancy(outsideTemp, occupancyCount);

    return currentTemp;
}