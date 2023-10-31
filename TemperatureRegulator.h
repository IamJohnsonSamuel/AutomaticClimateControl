#include "iostream"
#include "ITempRegulator.h"
#ifndef __TEMP_REGULATOR__
#define __TEMP_REGULATOR__
class TemperatureRegulator : public ITemperatureRegulator
{
private:
    int currentTemp;
    void increase();
    void decrease();

public:
    void regulate(int currentTemp);
};

#endif