
// Note: you should use separate compilation (you should have 4 files; one for every class and one driver). 

#include<iostream>
#include<string>
#include "Employee.h"
#include "Freelancer.h"
using namespace std;

int main()
{
    Person per1;
    Person per2("Ahmad","Mohamad",19);
    cout << "Person 1 :\n";
    per1.print();
    cout << "\nPerson 2 :\n";
    per2.print();
    Employee emp1;
    Employee emp2("AUS", 50000, "Prof. Orient West", "AUS Campus", 67);
   
    cout << "\nEmployee 1 :\n";
    emp1.print();
    cout << "\nEmployee 2:\n";
    emp2.print();


    Freelancer frlan1;
    Freelancer frlan2(120.25, 3, "Mr. Johnny English", "AUS Campus", 54);
    cout << "\nFreelancer 1 :\n";
    frlan1.print();
    cout << "\nFreelancer 2:\n";
    frlan2.print();


    return 0;

}
