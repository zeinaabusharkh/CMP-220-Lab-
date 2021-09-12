// The Employee is a Person with the following extra properties and functions:
// •	Employer (string ), private
// •	Salary (float), private
// •	Constructors ( default, non-default)
// •	Print function to print the details of the employee. 

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
#include <string>;
#include <iostream>
using namespace std;

class Employee :public Person{
private:
    string Employer;
    float Salary;
public:
   
    Employee(string emp="none", float salary=0.0,string name="none" , string address="none" , int age=0 ):Person(name , address, age)
    {
        Employer=emp;
        Salary=salary;
    }   
    void print()
    {
        cout<<"Employee : "<<Employer << "  Salary: "<<Salary<<endl;
        cout<<"Name:" << getName()<< " Age: " <<getAge()<<" Address: "<< getAddress()<<endl;
    }

};

#endif // !EMPLOYEE_H