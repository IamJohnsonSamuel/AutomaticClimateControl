class ITemperatureRegulator
{
public:
    virtual void regulate(int currentTemp) = 0;
    virtual ~ITemperatureRegulator() {}
};