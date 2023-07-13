#include <iostream>
#include <string>
using namespace std;

/*Instructions
Define a class Animal.
Define 3 member variables: color, name, age.
Define a derived class Snake that inherits from the base class Animal.
Create a member variable length for the Snake class.
Create a derived class Cat that inherits from the base class Animal.
Create a member variable height for the Cat class.
Create MakeSound() member functions for each of the derived classes.
In the main() function instantiate Snake and Cat objects. Initialize both their unique and derived attributes. Program them to make a sound.
// Define base class Animal

// Declare derived class Snake

// Declare derived class Cat

// Test in main()
*/

class Animal{
    public: 
    string color = "white";
    string name = "John Doe";
    int age = 1;
    void MakeSound();
};

class Snake : public Animal{
    public:
    float length = 1;
    void MakeSound(){
        cout<<"Hissss";
    }    
};

class Cat: public Animal{
    public:
    float height = 2.0; 
    void MakeSound(){
        cout<<"meow";
    }    

};

int main(int argc, char **argv){
    Snake viper;
    viper.color = "black";
    viper.age = 3;
    viper.length = 6;
    viper.MakeSound();

    return 0;
}