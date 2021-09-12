// The Freelancer in a Person with the following extra properties and functions: 
// •	Hourly rate (float)
// •	Number of projects (int)
// •	Constructors (default, non-default)
// •	Print function to print the details of the Freelancer 


#ifndef FREELANCER_H
#define FREELANCER_H
#include "Person.h"
#include <string>;
#include <iostream>
using namespace std;
class Freelancer: public Person{
    private:
    float HourlyRate;
    int NumberOfprojects;
    
    public:
    
    Freelancer(double hr=0.0 , int n=0 ,string name="none" , string address="none" , int age=0 ):Person(name , address , age)
    {
        HourlyRate=hr;
        NumberOfprojects=n;

    }

    void print()
    {
        cout<< "HourlyRate : "<<HourlyRate << " Number of projects: "<<NumberOfprojects <<endl; 
        cout<<"Name:" << getName()<< " Age: " <<getAge()<<" Address: "<< getAddress()<<endl;
    }

};

#endif // !FREELANCER_H