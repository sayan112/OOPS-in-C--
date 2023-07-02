//                                                 ******** Encapsulation *********
// Encapsulation  is about wrapping data and methods into a single class and protecting it from outside intervention.****

#include<iostream>
    using namespace std;
 class studentDetails{
     // private data members
 private:
     string name;
     int age;
     string address;

 public:
     // set method for student name to set  the value in private variable Name
 void setname(string name)
 {
     this->name = name;

 }
     // get method for student name to access private variable name
     string getname()
     {
 return name;
     }

     // set method for student age to set the value in private variable age
     void setage(int  age)
     {
 this->age = age;
     }
     // get method for student age to access private variable age
     int  getage()
     {
 return age;
     }
     // set method for student address to set the value in private variable address
     void setaddress(string address)
     {
 this->address = address;
     }
     // get method for student address to access private variable address
     string getaddress()
     {
 return address;
     }
 };
int main ()
{

     studentDetails sayan;
     // setting the values of the variables
     sayan.setname("Sayan Maitra");
     sayan.setaddress("West Bengal");
      sayan.setage(21);
// Printing the values of student object
      cout << sayan.getname()<<" ";
      cout << sayan.getaddress() <<" ";
      cout<<sayan.getage() << endl;
}