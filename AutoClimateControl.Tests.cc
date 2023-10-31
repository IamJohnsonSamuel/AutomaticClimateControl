#include <gtest/gtest.h>
#include "AutoClimateControl.h"
#include <gmock/gmock.h>
#include <gmock/gmock-matchers.h>
using testing::_;
using testing::Eq;

class MockTempCalculator : public ITempCalculator
{
public:
    MOCK_METHOD(int, getTemperature, ());
};

class MockTemperatureRegulator : public ITemperatureRegulator
{
public:
    MOCK_METHOD(void, regulate, (int currentTemp));
};

// Demonstrate some basic assertions.
TEST(AutoClimateControlTest, onTest)
{
    // Arrange
    MockTempCalculator mocTempCalcObj;
    MockTemperatureRegulator mockTempRegObj;
    AutoClimateControl objUnderTest(&mocTempCalcObj, &mockTempRegObj);
    EXPECT_CALL(mocTempCalcObj, getTemperature()).Times(1);
    EXPECT_CALL(mockTempRegObj, regulate(Eq(100))).Times(1);
    // Act
    objUnderTest.on();
}
