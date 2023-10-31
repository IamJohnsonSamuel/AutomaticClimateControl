#include "AutoClimateControl.h"
#include "TemperatureRegulator.h"
#include "TempCalculator.h"

void AutoClimateControl::on()
{
    autoClimateControlAvail = 1;

    int currentTemp = tempCalcObj.getTemperature();
    tempRegObj.regulate(currentTemp);
}

void AutoClimateControl::off()
{
    autoClimateControlAvail = 0;
}

int AutoClimateControl::getautoClimateControlAvail()
{

    return 1;
}
