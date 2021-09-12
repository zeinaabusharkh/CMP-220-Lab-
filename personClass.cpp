#include <iostream>
#include <cstring>
using namespace std;
class Person {
private:
	char* name;
	char* address;
	int age;
public:
//constructor 
	Person(const char* n = "None", const char* a = "None", int ag = 0);
//copy
	Person(const Person& p);
//destructor     
	~Person();
//assigment operator     
	Person& operator=(const Person& p);
//getter's and setter's    
	char* getName();
	char* getAddress();
	int getAge();
	void setName(char* n);
	void setAddress(char* a);
	void setAge(int ag);
//print function     
	void print();
};

//implementation 
Person::Person(const char* n, const char* a, int ag)
{
	name = new char[100];
	address = new char[100];
	strcpy(name, n);
	strcpy(address, a);
	age = ag;
}
Person::Person(const Person& p)
{
	name = new char[100];
	address = new char[100];
	strcpy(name, p.name);
	strcpy(address, p.address);
	age = p.age;
}
Person& Person::operator=(const Person& p)
{
	strcpy(name, p.name);
	strcpy(address, p.address);
	age = p.age;
	return *this;
}
//automatically invoked 
// (1) the function ends 
// (2) the program ends 
// (3) a block containing local variables ends 
// (4) a delete operator is called  
Person::~Person()
{
    //cout<<"destructor called!!!!!!"<<endl;
	delete[]name;
	delete[] address;
}
void Person::print()
{
	cout << "Name [" << name << "] Age [" << age << "] Address [" << address << "]"<<endl;
}
char* Person::getName() { return name; }
char* Person::getAddress() { return address; }
int Person::getAge() { return age; }
void Person::setName(char* n) { strcpy(name, n); }
void Person::setAddress(char* a) { strcpy(address, a); }
void Person::setAge(int ag) { age = ag; }

///EMPLOYEEE CLASS 

class Employee :public Person
{
private:
	char* employer;
	float salary;
public:
	//Default and non-default constructor at the same time, as function with default arguments
	Employee(const char* em = "None", float sal = 0, const char* n = "None", const char* a = "None", int ag = 0);
	Employee(const Employee& e);
	~Employee();
	Employee& operator=(const Employee& e);
	void print();
};
Employee::Employee(const char* em, float sal, const char* n, const char* a, int ag) : Person(n, a, ag)
{
	employer = new char[100];
	strcpy(employer, em);
	salary = sal;
}
Employee::Employee(const Employee& e) :Person(e)
{
	employer = new char[100];
	strcpy(employer, e.employer);
	salary = e.salary;
}
Employee::~Employee()
{
    //cout<<"destructor called!!!"<<endl;
	delete[]employer;
}
Employee& Employee::operator=(const Employee& e)
{
	Person::operator=(e); // or you can copy element by element.
	strcpy(employer, e.employer);
	salary = e.salary;
	return *this;
}
void Employee::print()
{
	Person::print();
	
	cout << " Employer [" << employer<<"] Salary ["<<salary<<"]"<<endl;;
}




int main()
{
// Person per1;
// Person per2("zena","Jazzat",20);
// cout<<"print per1: "<<endl;
// per1.print();
// cout<<"print per2: "<<endl;
// per2.print();
// cout<<"copy per2 into per1: "<<endl;
// per1=per2;
// per1.print();

// Person per4("sara", "sharjah", 17);
// cout<<"per4= ";
// per4.print();
// cout<<endl;
// Person per3 = per4;
// cout<<"per3= ";
// per3.print();

Employee emp1;
Employee emp2("Xiaomi",20000, "zena", "mars", 20);

cout<<"emp1 => ";
emp1.print();

cout<<"emp2 => ";
emp2.print();

emp1=emp2;
cout<<"emp1 => ";
emp1.print();

Employee p =emp1;

cout<<"p => ";
p.print();

    return 0;
}