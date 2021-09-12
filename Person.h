// The class Person contains the following properties and functions:
// •	Name (string ), private
// •	Age (int), private 
// •	Address  ( string), private
// •	Constructors ( default, non-default)
// •	Getters and Setters
// •	Print function to print the details of the person 

#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;


class Person{
private:
    string Name;
    string Address;
    int Age;

public:

//default and non-default constructor
    Person(string name="none" , string address="none" , int age=0)
    {
        Name=name;
        Address=address;
        Age=age;
    }
//getters and setters    
    string getName()
    {
        return Name;
    }
    string getAddress()
    {
        return Address;
    }
    int getAge()
    {
        return Age;
    }

    void setName(string input)
    {
        Name=input;
    }

    void setAddress(string input)
    {
        Address=input;
    }

    void setAge(int input)
    {
        Age=input;
    
    }
//print function 
    void print()
    {
        cout<<"Name:" << Name<< " Age: " <<Age<<" Address: "<< Address<<endl;
    }



};

#endif//!PERSON_H