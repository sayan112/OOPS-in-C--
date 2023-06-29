#include <bits/stdc++.h>
using namespace std;

// class
class Hero
{
private:
    // has properties like health, height, weight and color
    int health;

public:
    // setter and getter methods
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
