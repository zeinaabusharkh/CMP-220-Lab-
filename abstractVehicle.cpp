#include<iostream>
using namespace std;

// Vehicle is an abstract class and has only one pure virtual functions called printInfo(). 
class Vehicle {
public:
	virtual void printInfo()= 0;
	virtual ~Vehicle()
	{
		cout << "Destructor of Vehicle is called\n";
	}
};

// Car is a concrete class and has manufacturer (string), manuYear (int) and model (string) as attributes.
class Car: public Vehicle
{
    private:
    string manufacturer,model;
    int manuYear;
    public:
    // You should write constructor and constructor with parameter for 
    //every concrete class also you should implement the virtual function printInfo(). 
    Car(const string m="none" , const string mm="none" , int y=0)
    {
       this-> manufacturer=m ;
        this->model=mm;
        this->manuYear=y;
    }
    void printInfo()
    {
        cout<< " manufacturer = "<< manufacturer<< " model= "<<model<<"  manuYear="<<manuYear<<endl;
    }
    ~Car()
    {
        cout<<"Destructor of class Car  is called"<<endl;
    }

};
// Tuck is a concrete class and has, manufacturer (string), manuYear (int), max_weight (float) and max_height (float) as attributes.  
class Truck:public Vehicle
{
    private:
    string manufacturer;
    int manuYear;
    float max_weight;
    float max_height;
    public:
    // You should write constructor and constructor with parameter for 
    //every concrete class also you should implement the virtual function printInfo(). 
    Truck(const string m="none" , int y=0, float max_weight=0 ,float max_height=0)
    {
        this->max_weight=max_weight;
        this->max_height=max_height;
        this->manufacturer=m ;
        this->manuYear=y;
    }
    void printInfo()
    {
        cout<< "max_weight = "<<max_weight<<"  max_height = "<<max_height<< " manufacturer = "<< manufacturer<< "  manuYear="<<manuYear<<endl;
    }
      ~Truck()
    {
        cout<<"Destructor of class Truck is called"<<endl;
    }

};

// You should write a destructor for each class, in the destructor print a message with the following format: “Destructor of class [class_name] is called” 
// Where class_name is the class to which the destructor belongs. 
// Test the Both Car and Truck classes in the main().


int main() {

	Vehicle *arr[2];
    arr[0] = new Car("Nissan","Altima",2017);
    arr[1] = new Truck("Volvo",2016,50000.0,2.5);
    for (int i = 0; i < 2; i++) {
        arr[i]->printInfo();
    }
    for (int i = 0; i < 2; i++)
    {
        delete arr[i];
    }
    return 0;
}
