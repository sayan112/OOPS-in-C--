/*
OOPS stands for Object-Oriented Programming (OOP). It is a programming methodlogy that organizes software design around objects, which are instances of classes. In object-oriented programming, objects are the fundamental building blocks used to represent real-world entities or abstract concepts. OOP focuses on encapsulating data (attributes) and behavior (methods) into objects, allowing for modular and reusable code.

*/


#include <bits/stdc++.h>
using namespace std;

// class
class Hero
{
private:
    // has properties like health, height, weight and color
    // private data members
    int health=20;

public:
    // setter and getter methods
    //public member functions
    void set_health(int health)
    {
        
        this->health = health;
    }
    void get_health()
    {
        cout << "get health called"
             << " ";
        cout << health << endl;
    }
};

int32_t main()
{
    // its creation of object
    Hero saktiman;
    // example of encampulation also :)
    saktiman.set_health(100);
    saktiman.get_health();

    return 0;
}

// In object - oriented programming(OOP) with C++,

// A class is a blueprint or template that defines the structure and behavior of objects. It serves as a blueprint for creating multiple instances of objects with similar characteristics and functionalities. A class encapsulates data members (properties) and member functions (methods) that operate on those data members.

// An object, on the other hand, is an instance of a class. It is created from the class blueprint and represents a specific entity or element that has its own unique state and behavior. You can create multiple objects from the same class, each with its own distinct data values.
