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
     sayan.setname("Sayan Maitra");
     sayan.setaddress("london");
      sayan.setage(18);
      cout << sayan.getname()<<" "<< sayan.getaddress() <<" ";
      cout<<sayan.getage() << endl;
}