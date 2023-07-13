#include <assert.h>

#include <cmath>
#include <iostream>
using namespace std;
// Define pi 
#define pi 3.14159

// TODO: Declare Vehicle as the base class
class Vehicle {
 public:
  bool trunk;
  int seats;
  int wheels;
  Vehicle(bool hasTrunk, int numOfSeats, int numOfWheels) : trunk(hasTrunk) {
    seats = numOfSeats;
    wheels = numOfWheels;
  }
  Vehicle(){
    cout<<"In the Vehicle";
  }
};

// TODO: Derive Car from Vehicle
class Car : public Vehicle {
    public:
    Car(){
        cout<<"In the Car";
    }
};

// TODO: Derive Sedan from Car
class Sedan : public Car {
    public:
    Sedan(){
        cout<<"In the Sedan";
    }
};

// TODO: Update main to pass the tests
int main() {
  Sedan sedan;
  sedan.trunk = true;
  sedan.wheels = 4;
  sedan.seats = 4;

  assert(sedan.trunk == true);
  assert(sedan.seats == 4);
  assert(sedan.wheels == 4);
}