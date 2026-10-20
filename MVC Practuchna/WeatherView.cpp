
#include "WeatherView.h"
#include <iostream>
using namespace std;
void WeatherView::showMenu() {
    cout << "\n===== ПОШУК ПОГОДИ =====\n";
    cout << "1. Знайти погоду\n";
    cout << "0. Вихід\n";
    cout << "Ваш вибір: ";
}
void WeatherView::showWeather(const WeatherModel& model) {
    cout << "\n===== ПОГОДА =====\n";
    cout << "Місто: " << model.getCity() << endl;
    cout << "Температура: "
        << model.getTemperature() << " C\n";
    cout << "Швидкість вітру: "
        << model.getWindSpeed() << " км/год\n";
    cout << "Вологість: "
        << model.getHumidity() << " %\n";
}
void WeatherView::showError(const string& message) {
    cout << "\nПомилка: " << message << endl;
}
