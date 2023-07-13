#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    int transmission = 4;
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : public Vehicle {
public:
    bool kickstand = true;
};

class Scooter: public Vehicle{

};

int main() 
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.Print();

    Scooter s1;
    s1.wheels = 2;
    s1.Print();

    if(car.sunroof)
        std::cout << "And a sunroof!\n";
};