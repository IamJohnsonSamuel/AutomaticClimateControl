#include "TempCalculator.h"

int OutsideTemp::getOutsideTemp()
{
    int outside = 0;

    return outside;
}

int OccupencySensor::getOccupancyCount()
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
    int outsideTemp = outsideTempObj.getOutsideTemp();
    int occupancyCount = occupencyObj.getOccupancyCount();

    int currentTemp = getTempFromOutsideAndOccupancy(outsideTemp, occupancyCount);

    return currentTemp;
}