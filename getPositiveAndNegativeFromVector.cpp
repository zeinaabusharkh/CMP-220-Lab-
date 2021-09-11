// (File I/O with vector of doubles)
// An input file contains a list of numbers separated by spaces. Write the following functions:
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<double> readValues()
{
// •	Open the input file “input.txt” and make sure it is opened successfully, if not print an error message and exit the program. 
        ifstream in("input.txt"); 
        if(in.is_open())
        {
// •	Declare a vector to hold the values of type double, call it res. 
        vector<double> res;
// •	Read values from the file and save them into the vector res. 
        double readValue;
        while(!in.eof())
        {
            in>>readValue;
            res.push_back(readValue);

        }
// •	Close the input file 
        in.close();
// •	Return the vector res to the caller. 
        return res;
        }  
        else
        {
            cout<<"Error, cannot open file!!"<<endl;
            exit(1);

        }
        


}



// Th printResults function should do the following steps:
void printVector(string filename,vector<double> values)
{
// •	Open the file 
    ofstream out(filename);
    int size=values.size();
    for(int i=0;i<size;i++)
    {
    out<<values[i]<< "  ";
    }
}
vector<double> negatives(vector<double> values)
{
    vector<double> neg;
    int size=values.size();
    cout<<"negative values are: ";
    for(int i=0;i<size;i++)
    {
        if(values[i]<0)
        {
            neg.push_back(values[i]);
            cout<<values[i]<< "  ";
        }
    
    }
    return neg;
}
vector<double> positives(vector<double> values)
{
    vector<double> pos;
    int size=values.size();
    cout<<"positive values are: ";
    for(int i=0;i<size;i++)
    {
        if(values[i]>=0)
        {
            pos.push_back(values[i]);
            cout<<values[i]<< "  ";
        }
    
    }
    return pos;
}


// Write a C++ program that call readValues function to read the values from the file and return 
//them into a vector call it values. Then call the negatives and positives functions to get the negatives
// and positives values vectors, Then call the printVector for both of them to print them in
// the negatives.txt and positives.txt files.

int main()
{
vector <double> read =readValues();
vector <double> neg = negatives(read);
vector<double>pos= positives(read);
printVector("pos.txt", pos);
printVector("neg.txt", neg);


    return 0;
}

// Sample input and output files are given below:

// inputs.txt 
// 22.1 -5.6 10.54 -9.2 20 0

// negatives.txt 
// -5.6 -9.2 

// positives.txt 
// 22.1 10.54 20 0 

