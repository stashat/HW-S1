#include "car.h"
#include<string>
#include<iostream>


void Car::print(){
    cout << "Brand: " << brand << "\nType: " << type << "\nkW: " << kW << "\nColor: " <<color_names.at(static_cast<size_t>(color)) << "\nExtras: " << extra_names.at(static_cast<size_t>(extra)) << "\n";
}
void Car::read(){
    int car_color, car_extra;
    cout << "Enter the car brand: ";
    cin >> brand;
    cout << "Enter the car type: ";
    cin >> type;
    cout << "Enter the car kW: ";
    cin >> kW;
    cout << "Enter the car color number (0-red, 1-green, 2-blue): ";
    cin >> car_color;
    switch (car_color)
    {
    case 0:
        color = Colors::red;
        break;
    case 1:
        color = Colors::green;
        break;
    case 2:
        color = Colors::blue;
        break;
    default:
        throw runtime_error{"Invalid input of car color!(0-red, 1-green, 2-blue)"};
        break;
    }
    cout << "Enter the car extra number (0-extra1, 1-extra2): ";
    cin >> car_extra;
    switch (car_extra)
    {
    case 0:
        extra = Extras::extra1;
        break;
    case 1:
        extra = Extras::extra2;
        break;
    default:
        throw runtime_error{"Invalid input of car extra!(0-extra1, 1-extra2)"};
        break;
    }

    
}