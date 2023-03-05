#include "car.h"
#include <iostream>
using namespace std;

vector<string> histogram(vector <Car> cars){
    vector<string> cars_per_color{"","",""};
    for (const auto& car: cars)
    {
        if (car.color== Car::Colors::red)
        {
            cars_per_color.at(0) += '*';
        }
        if (car.color== Car::Colors::green)
        {
            cars_per_color.at(1) += '*';
        }
        
        if (car.color== Car::Colors::blue)
        {
            cars_per_color.at(2) += '*';
        }
        
    }
    return cars_per_color;
}

int main(){
    
    Car car1;
    // car1.read();
    // car1.print();
    car1.color = Car::Colors::green;

    Car car2;
    // car2.read();
    // car2.print();
    car2.color = Car::Colors::green;

    Car car3;
    // car3.read();
    // car3.print();
    car3.color = Car::Colors::blue;
    Car car4;
    // car4.read();
    // car4.print();
    car4.color = Car::Colors::red;

    vector <Car> car_vector;
    car_vector.push_back(car1);
    car_vector.push_back(car2);
    car_vector.push_back(car3);
    car_vector.push_back(car4);

    vector<string> new_vector = histogram(car_vector);
    cout << "red: " << new_vector.at(0) << "\n";
    cout << "green: " << new_vector.at(1) << "\n";
    cout << "blue: " << new_vector.at(2)<< "\n";
    
    

    return 0;
}
