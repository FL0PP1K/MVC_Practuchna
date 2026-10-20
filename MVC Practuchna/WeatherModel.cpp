#include "WeatherModel.h"
WeatherModel::WeatherModel(string c, int t, int h) {
    city = c;
    temperature = t;
    humidity = h;
}
string WeatherModel::getCity() const {
    return city;
}
int WeatherModel::getTemperature() const {
    return temperature;
}
int WeatherModel::getHumidity() const {
    return humidity;
}