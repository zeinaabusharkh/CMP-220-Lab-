#include<iostream>
using namespace std; 
class Color
{
    friend Color Add(Color &c1 , Color &c2);
    friend Color subtract(Color &c1 , Color &c2);
    friend Color isColorEqual(Color &c1 , Color &c2);
    friend  Color operator+( Color& c1,  Color& c2);
    friend  Color operator-( Color& c1,  Color& c2);
    friend bool operator==( Color& c1,  Color& c2);


private:
	int red, green, blue;
public:
	// Add a default constructor 
    Color()
    {
        red=green=blue=0;
    }
    // Add a constructor with parameters 
    Color(int r, int g , int b)
    {
        red=r;
        blue=b;
        green=g;

    }
    
	void setRed(int r){ red = r; }
	void setGreen(int g){ green = g; };
	void setBlue(int b){ blue = b; }
	int getRed(){ return red; }
	int getGreen(){ return green; } 
	int getBlue(){ return blue; }
}; 
 Color Add(Color &c1 , Color &c2)
 {
     Color resultColor((c1.red+c2.red),(c1.green+c2.green),(c1.blue+c2.blue));
     if(resultColor.red >250)
     {
         resultColor.setRed(250);
     }
     if(resultColor.blue >250)
     {
         resultColor.setBlue(250);
     }
     if(resultColor.green >250)
     {
         resultColor.setGreen(250);
     }
     cout<<"Color 1 + Color 2 = red->"<< resultColor.red << "  green-> "<< resultColor.green << " blue-> "<< resultColor.blue <<endl;
 }
 Color subtract(Color &c1 , Color &c2)
 {
     Color resultColor((c1.red-c2.red),(c1.green-c2.green),(c1.blue-c2.blue));
       if(resultColor.red<0)
     {
         resultColor.setRed(0);
     }
     if(resultColor.blue <0)
     {
         resultColor.setBlue(0);
     }
     if(resultColor.green<0)
     {
         resultColor.setGreen(0);
     }

     cout<<"Color 1 - Color 2 = red->"<< resultColor.red << " green-> "<< resultColor.green << " blue-> "<< resultColor.blue <<endl;
 }


 Color isColorEqual(Color &c1 , Color &c2)
 {
     if( c1.red==c2.red && c1.blue==c2.blue &&c1.green==c2.green  )
     {
         cout<< "Color 1 == Color 2 are equal  " << endl;
     }else{
         cout<< "Color 1 == Color 2 are not equal  " << endl;
     }
 }

Color operator+( Color& c1,  Color& c2)
{
     Color resultColor((c1.red+c2.red),(c1.green+c2.green),(c1.blue+c2.blue));
     if(resultColor.red >250)
     {
         resultColor.setRed(250);
     }
     if(resultColor.blue >250)
     {
         resultColor.setBlue(250);
     }
     if(resultColor.green >250)
     {
         resultColor.setGreen(250);
     }
     cout<<"Color 1 + Color 2 = red->"<< resultColor.red << "  green-> "<< resultColor.green << " blue-> "<< resultColor.blue <<endl;

}
Color operator-( Color& c1,  Color& c2)
{
    Color resultColor((c1.red-c2.red),(c1.green-c2.green),(c1.blue-c2.blue));
       if(resultColor.red<0)
     {
         resultColor.setRed(0);
     }
     if(resultColor.blue <0)
     {
         resultColor.setBlue(0);
     }
     if(resultColor.green<0)
     {
         resultColor.setGreen(0);
     }

     cout<<"Color 1 - Color 2 = red->"<< resultColor.red << " green-> "<< resultColor.green << " blue-> "<< resultColor.blue <<endl;
}
bool operator==( Color& c1,  Color& c2){
    if( c1.red==c2.red && c1.blue==c2.blue &&c1.green==c2.green  )
     {
         return true;
     }else{
         return false;
     }
}


 int main()
 {
     Color c1(156, 111,2);
     Color c2(200,22,100);
     c1+c2;
     c1==c2;
     c2-c1;

    //  isColorEqual(c1,c2);
    //  Add(c1,c2);
    //  subtract(c1,c2);

     return 0;

 }
