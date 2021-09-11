#include <iostream>
using namespace std;
class Array {
    friend ostream& operator<<(ostream& out,const Array& arr);
    friend istream& operator>>(istream& in, Array& arr);
public:
    Array();//Initialize the array with size of 10 with 0 values
    Array(int n); //Initialize the array with size of n with 0 values 
    //TODO 1: the function header for the Copy Constructor 
    Array(const Array &a1);
    //TODO 2: the function header for the Destructor. 
    ~Array();
    //TODO 3: the function header for the = operator 
    Array operator=(const Array& rhs);
    Array& operator++();//This operator should add 1 to every element in the values and return a reference to the calling object 
    Array operator+(const Array& rhs); //this operator should do additions of elements in the calling object with the ones from the rhs, return the result as a new object  
    bool operator==(const Array& rhs); //this function should return true if all elements in the calling object are equal to their corresponding elements in the rhs. 
    int getSize() { return size;}

private:
    int  *arr;
    int size;
};

//TODO 4: Implementation of the << operator
ostream& operator<<(ostream& out,const Array& arr)
{
    out<<"Size ["<<arr.size<<"] Values [";
    for(int i=0;i<arr.size;i++)
    {
        out<<arr.arr[i]<<" ";
    }

    return out;
}
//TODO 5: Implementation of the >> operator 
istream& operator>>(istream& in, Array& arr)
{

    for(int i=0;i<arr.size;i++)
    {
       in>>arr.arr[i];
    }

    return in;
}

//TODO 6: Implementation of the Array(); constructor 
Array::Array()
{
    size=10;
    arr= new int[size];
    for(int i =0;i<size;i++){arr[i]=0;} 
}

//TODO 7: Implementation of the Array(int n); constructor 
Array::Array(int n)
{
    size=n;
    arr=new int[size];  
    for(int i =0;i<size;i++){arr[i]=0;} 
}
//TODO 8: Implementation of the copy constructor 
Array::Array(const Array &a1)
{
    arr= a1.arr;
    size= a1.size;
    for(int i =0;i<size;i++){arr[i]=a1.arr[i];} 


}

//TODO 9: Implementation of the destructor 
Array::~Array()
{
    delete[] arr;
}

//TODO 10: Implementation of the = operator
Array Array::operator=(const Array& rhs)
{
    if(this==&rhs)// self assignment x=x;
    {
        return  *this;
    }
    // Handle the different size issue
    if(size!=rhs.size)
    {
        delete [] arr;
        size =rhs.size;
        arr = new int[size];
    }
    // copy values
    for(int i=0;i<size;i++)
    {
        arr[i] = rhs.arr[i];
    }
    return *this;

}
//TODO 11: Implementation of the ++ operator
Array& Array::operator++()
{
for(int i =0;i<size;i++){arr[i]++;} 
return *this;
}
//TODO 12: Implementation of the + operator 
Array Array::operator+(const Array& rhs)
{
    //check size 
    if(size != rhs.size)
    {
        cout<<"Size Mismatch\n";
        exit(3);
    }
    Array result(size);
    for(int i =0 ;i<size;i++)
    {
        result.arr[i]= arr[i]+rhs.arr[i];
    }
    return result;
}

//TODO 13: Implementation of the == operator 
bool Array::operator==(const Array& rhs)
{
    if(this==&rhs)// self checking x==x;
    {
        return  true;
    }
    // Handle the different size issue
    if(size!=rhs.size)
    {
        return  false;
    }
    // I need one mismatch to tell they are not equal, searching for it
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=rhs.arr[i])
        {
            return  false;
        }
        // Don't ever use else while searching for something, check the current element if not the one you looking for, go and check the next.
    }
    // Done with my search, found no mismatches, then they are equal.
    return true;

}

int main()
{
    Array A(5);
    cout << "Please Enter " << A.getSize() << " elements for A1 :";
    cin>>A;
    Array B(5);
    cout << "Please Enter " << B.getSize() << " elements for B : ";
    cin>>B;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;
    cout << "\nArray C = ++A, printing A and C after the ++\n";
    Array  C = ++A;
    cout<<"A = "<<A<<"\nC = "<<C<<endl;
    cout << "A == C = " << (A == C) << endl;
    cout << "A == B = " << (A == B) << endl;
    cout << "Testing the copy constructor and the + operator:\n";
    Array D = A+B;
    cout<<"Array D = A+B = "<<D<<endl;
    cout<<"A = "<<A<<endl;
    cout<<"B = "<<B<<endl;
    cout << endl;
    cout << "Testing the = operator ";
    Array F;
    F = D;
    cout<<"Array F ; F= D = "<<F<<endl;
    cout << endl;
    cout << "Testing the default constructors Array W;";
    Array w;
    cout << "\nW = "<<w<<endl;
    
    cout << endl;
}
