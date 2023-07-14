#include <iostream>
#include <string>
using namespace std;

// TODO: Write hello() function
void hello() { cout << "Hello world! As usual" << endl; }
// TODO: Overload hello() three times
void hello(string name) { cout << "Hello to you!" << name << endl; }
// TODO: Call hello() from main()
int main() {
  hello();
  hello("Gaurav");
}