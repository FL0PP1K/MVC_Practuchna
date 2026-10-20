#include "WeatherController.h"
#include <iostream>
using namespace std;
void WeatherController::run() {
    WeatherView view;
    int choice;
    while (true) {
        cout << "\n1. Kolomyia\n";
        cout << "2. Kyiv\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input!\n";
            continue;
        }
        if (choice == 0)
            break;
        if (choice == 1) {
            WeatherModel weather("Kolomyia", 18, 65);
            view.showWeather(weather);
        }
        else if (choice == 2) {
            WeatherModel weather("Kyiv", 21, 60);
            view.showWeather(weather);
        }
        else {
            cout << "Invalid choice!\n";
        }
    }
}