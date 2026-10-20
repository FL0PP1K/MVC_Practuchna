#include "WeatherView.h"
#include <iostream>
using namespace std;
void WeatherView::showWeather(const WeatherModel& model) {
    cout << "\nCity: " << model.getCity() << endl;
    cout << "Temperature: " << model.getTemperature() << " C\n";
    cout << "Humidity: " << model.getHumidity() << " %\n";
}