#pragma once
#include <string>
using namespace std;
class WeatherModel {
private:
    string city;
    int temperature;
    int humidity;
public:
    WeatherModel(string c, int t, int h);
    string getCity() const;
    int getTemperature() const;
    int getHumidity() const;
};