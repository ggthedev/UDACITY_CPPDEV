#include <cassert>
#include <iostream>
#include <string>

using namespace std;

// TODO: Define Point class
class Point {
 public:
  Point(){};
  int x;
  int y;
  Point(int xcoord, int ycoord) : x(xcoord), y(ycoord) {}
  Point operator+(const Point& p1) {
    Point n;
    n.x = this->x + p1.x;
    n.y = this->y + p1.y;
    return n;
  }
};

// Test in main()
int main() {
  Point p1(10, 5), p2(2, 4);
  Point p3 = p1 + p2;  // An example call to "operator +";
  assert(p3.x == p1.x + p2.x);
  assert(p3.y == p1.y + p2.y);
}