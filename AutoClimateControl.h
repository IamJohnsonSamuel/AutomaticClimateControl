#include "iostream"
#include "ITempCalculator.h"
#include "ITempRegulator.h"

class AutoClimateControl
{
private:
    int autoClimateControlAvail;
    ITempCalculator *tempCalcObj;
    ITemperatureRegulator *tempRegObj;

public:
    AutoClimateControl(ITempCalculator *tempCalcObj, ITemperatureRegulator *tempRegObj);
    void on();
    void off();
    void setautoClimateControlAvail(int value);
    int getautoClimateControlAvail();
};