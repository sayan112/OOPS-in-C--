#include <iostream>

class Base {
public:
    virtual void virtualFunction() {
        std::cout << "Base class virtual function" << std::endl;
    }
};

class Derived : public Base {
public:
    void virtualFunction() override {
        std::cout << "Derived class virtual function" << std::endl;
    }
};

int main() {
    Base* basePtr = new Derived(); // Pointer to a derived class object
    basePtr->virtualFunction();    // Calls the derived class function

    delete basePtr;
    return 0;
}

/*
In C++, a virtual function is a member function of a base class that can be overridden by a derived class.It allows dynamic binding or late binding, which means that the appropriate function to call is determined at runtime based on the type of the object being referred to.

*/