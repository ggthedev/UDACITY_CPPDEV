#include <assert.h>

#include <cmath>
#include <iostream>
using namespace std;
// Define pi
#define pi 3.14159

// Define Line Class
class LineSegment {
 public:
  LineSegment(float len = 0.0) { length = len; }
  float getLength() { return length; }

 private:
  float length;
};
// Define protected attribute length

// Define Circle subclass
class Circle {
 private:
  LineSegment raidus;

 public:
  Circle(LineSegment r) { raidus = r; };
  float Area() { return pi * raidus.getLength() * raidus.getLength(); }
};
// Define public setRadius() and getArea()

// Test in main()
int main() {
  LineSegment radius{3};
  Circle circle(radius);
  assert(int(circle.Area()) == 28);
}