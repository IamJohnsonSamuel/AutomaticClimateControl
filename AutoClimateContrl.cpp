#include "AutoClimateControl.h"

void AutoClimateControl::on()
{
    autoClimateControlAvail = 1;

    int currentTemp = tempCalcObj->getTemperature();
    currentTemp = 10;
    tempRegObj->regulate(currentTemp);
}

void AutoClimateControl::off()
{
    autoClimateControlAvail = 0;
}

int AutoClimateControl::getautoClimateControlAvail()
{

    return 1;
}

AutoClimateControl::AutoClimateControl(ITempCalculator *CalcObj, ITemperatureRegulator *RegObj)
{
    tempCalcObj = CalcObj;
    tempRegObj = RegObj;
}
