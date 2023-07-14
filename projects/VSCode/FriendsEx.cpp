// Example solution for Rectangle and Square friend classes
#include <assert.h>

// Define class Square as friend of Rectangle
class Square {
  friend class Rectangle;
 private:
  int side;
 public:
  Square(int side) { this->side = side; }
};

// Declare class Rectangle
class Rectangle {    
 private:
  int width;
  int height;
 public:    
  Rectangle(Square sq) {
    width = sq.side;
    height = sq.side;
  }
  float Area() { return width * height; }
};

int main() {
  Square square(4);
  Rectangle rectangle(square);
  assert(rectangle.Area() == 16);
}