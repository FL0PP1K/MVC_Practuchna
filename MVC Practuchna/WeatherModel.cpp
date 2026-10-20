#include "WeatherModel.h"
WeatherModel::WeatherModel() {
    city = "";
    temperature = 0;
    windSpeed = 0;
    humidity = 0;
}
void WeatherModel::setWeather(string c, double t, double w, int h) {
    city = c;
    temperature = t;
    windSpeed = w;
    humidity = h;
}
string WeatherModel::getCity() const {
    return city;
}
double WeatherModel::getTemperature() const {
    return temperature;
}
double WeatherModel::getWindSpeed() const {
    return windSpeed;
}
int WeatherModel::getHumidity() const {
    return humidity;
}