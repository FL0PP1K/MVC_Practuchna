#pragma once
#include <string>
using namespace std;
class WeatherModel {
private:
    string city;
    double temperature;
    double windSpeed;
    int humidity;
public:
    WeatherModel();
    void setWeather(string city, double temp, double wind, int hum);
    string getCity() const;
    double getTemperature() const;
    double getWindSpeed() const;
    int getHumidity() const;
};
