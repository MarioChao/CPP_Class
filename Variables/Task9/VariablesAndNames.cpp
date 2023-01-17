#include <iostream>
using namespace std;

int main() {
    int cars, drivers, passengers, cars_not_driven, cars_driven;
    double space_in_a_car, carpool_capacity, average_passengers_per_car;

    // Assign 100 to cars
    cars = 100;
    // Assign 4.0 to space_in_a_car
    space_in_a_car = 4.0;
    // Assign 30 to drivers
    drivers = 30;
    // Assign 90 to passengers
    passengers = 90;
    // Calculate and assign cars_not_driven
    cars_not_driven = cars - drivers;
    // Assign drivers to cars_driven
    cars_driven = drivers;
    // Calculate and assign carpool_capacity
    carpool_capacity = cars_driven * space_in_a_car;
    // Calculate and assign average_passengers_per_car
    average_passengers_per_car = passengers / cars_driven;

    cout << "There are " << cars << " cars available.\n";
    cout << "There are only " << drivers << " drivers available.\n";
    cout << "There will be " << cars_not_driven << " empty cars today.\n";
    cout << "We can transport " << carpool_capacity << " people today.\n";
    cout << "We have " << passengers << " to carpool today\n";
    cout << "We need to put about " << average_passengers_per_car << " in each car.\n";
}