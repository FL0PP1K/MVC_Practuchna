#pragma once
#include "WeatherModel.h"
#include <string>
class WeatherView {
public:
    void showWeather(const WeatherModel& model);
    void showError(const std::string& message);
    void showMenu();
};