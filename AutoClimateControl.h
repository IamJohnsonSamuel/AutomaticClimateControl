#include "iostream"
#include "TempCalculator.h"
#include "TemperatureRegulator.h"

class AutoClimateControl
{
private:
    int autoClimateControlAvail;
    TempCalculator tempCalcObj;
    TemperatureRegulator tempRegObj;

public:
    void on();
    void off();
    void setautoClimateControlAvail(int value);
    int getautoClimateControlAvail();
};