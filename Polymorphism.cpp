/*
Polymorphism is considered one of the important features of Object - Oriented Programming.Polymorphism is a concept that allows you to perform a single action in different ways.Polymorphism is the combination of two Greek words.The poly means many, and morphs means forms.So polymorphism means many forms.Let’s understand polymorphism with a real - life example.Real - life example : A person at the same time can have different characteristics.Like a man at the same time is a father, a husband, and an employee.So the same person possesses different behavior in different situations.This is called polymorphism.
*/

/*

                                       Polymorphism
                                       /          \
                    Runtime Polymorphism       Compiletime Polymorphism






Compiletime Polymorphism -> This type of polymorphism is achieved by function overloading or operator overloading.

A. Function Overloading
When there are multiple functions with the same name but different parameters, then the functions are said to be overloaded, hence this is known as Function Overloading. Functions can be overloaded by changing the number of arguments or/and changing the type of arguments. In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name. There are certain Rules of Function Overloading that should be followed while overloading a function.

Below is the C++ program to show function overloading or compile-time polymorphism:
 static polymorphism
 early binding 

*/

/*

#include <bits./stdc++.h>
using namespace std;
class human
{
public:
  void speak()
  {
    cout << "speaking human with 0 parameters" << endl;
  }
  void speak( int a)
  {
    cout << "speaking human with 1 , int  parameters" << endl;
  }
  void speak(string a)
  {
    cout << "speaking human with 1 , string  parameters" << endl;
  }
  void speak(int a, int b )
  {
    cout << "speaking human with double  parameters" << endl;
  }
 };
  int main()
  {
    human sayan;
    // Function being called depends
    // on the parameters passed
    // speak() is called
    sayan.speak();
    sayan.speak(1);
    sayan.speak("sayan");
    sayan.speak(1,2);
  }


*/

/*
Runtime Polymorphism

This type of polymorphism is achieved by Function Overriding. Late binding and dynamic polymorphism are other names for runtime polymorphism. The function call is resolved at runtime in runtime polymorphism. In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

Runtime polymorphism is also known as dynamic polymorphism. Method overriding is a way to implement runtime polymorphism.

Method overriding: Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. In other words, whatever methods the parent class has by default are available in the child class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child class is allowed to redefine that method based on its requirement. This process is called method overriding.

Rules for method overriding:
●The parent class method and the method of the child class must have the same name.
●The parent class method and the method of the child class must have the same parameters.
●It is possible through inheritance only.

*/

#include <bits./stdc++.h>
using namespace std;
class Animal
{
public:
    void color()
    {
        cout << "grey" << endl;
    }
};
class Dog : public Animal
{
public:
    void color()
    {
        cout << "black" << endl;
    }
};
int main()
{
    Dog germanshepherd;
    germanshepherd.color();
}