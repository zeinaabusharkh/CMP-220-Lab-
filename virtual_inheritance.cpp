// Implement the classes with using virtual inheritance to meet the following specifications: 
// -	The Eat() function should print “I am a food eating animal” 
// -	The Breathe() function should print “I have a lung and I can't live without breathing air” 
// -	The Walk() function should print “I have legs and use them to walk” 
// -	The LovesHoney() should print “I am a honey-loving bear” 

#include <iostream>
using namespace std;
class Animal{
public:
    void Eat()
    {
        cout<<"I am a food eating animal\n";
    }
};

class Mamal : virtual public Animal{
public:
    void Breathe()
    {
        cout<<"I have a lung and I can't live without breathing air\n";
    }
};

class LeggedAnimal : virtual public Animal{
public:
    void Walk()
    {
        cout<<"I have legs and use them to walk\n";
    }
};

class Bear : public Mamal, public LeggedAnimal{
public:
    void LovesHoney()
    {
        cout<<"I am a honey-loving bear\n";
    }
};



int main()
{
    Bear b;
    b.Eat();
   b.Breathe();
    b.Walk();
    b.LovesHoney();
    return 0;
}