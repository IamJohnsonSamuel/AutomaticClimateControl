#include "TemperatureRegulator.h"

void TemperatureRegulator::increase()
{
}

void TemperatureRegulator::decrease()
{
}

void TemperatureRegulator::regulate(int currentTemp)
{
    if (currentTemp % 2 == 0)
    {
        increase();
    }
    else
    {
        decrease();
    }
}