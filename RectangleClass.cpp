// Write a class Rectangle, which has two data members, namely, length and width.
//  It has member functions that calculates and prints out, the rectangle's perimeter ( ) and area ( ).
//   Write member functions to set and get length and width attributes. You must also provide a default 
//   constructor that sets length =0 and width = 0 and a constructor with parameters.

// Perimeter = 2*(length + width)
// Area =length * width

// In the main program do the following: 
// •	Create an object of type Rectangle.
// •	Read the objects length and width from the user. 
// •	Print the rectangle’s perimeter and Area to the user. 


#include <iostream>
using namespace std;
class Regtangle
{
private :
    int lenght;
    int width;
public:
     // constructor 
     Regtangle(int l =2 , int w=3)
     {
            lenght = l;
            width = w;
     }
      // Setter
    void setlenght(int l) {
      lenght = l;
    }
    void setWidth(int w) {
      width = w;
    }
    
    // Getter
    int getLenght() {
      return lenght;
    }
    int getWidth() {
      return width;
    }



    void  perimeter()
    {
        cout<<"permiter : " <<2*(lenght + width)<<endl;        
    }
    void area()
    {
        cout<<"area = "<< lenght *width<<endl;        
    }

};
int main()
{

Regtangle Rec(10,3);
Regtangle Rec2;

Rec.perimeter();
Rec.area();

cout<<"Calculating using default constructor : " <<endl;
Rec2.perimeter();
Rec2.area();


    return 0;
}
