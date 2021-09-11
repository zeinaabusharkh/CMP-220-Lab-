///input.txt 
// 22.2  1.433  6  9.443
// 2.44  5.33  2.33 

///output.txt (after running the funtions u will get )
// The sum is : 51.506
// The max is : 22.2
// The min is : 1.433


#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
// The readValues function should do the following steps: 
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
void printResults(vector<double> values)
{
// •	Open an output file called output.txt
    ofstream out("output.txt");
// •	Declare and initialize variables for min, max and sum, make sure not to use a constant value (like 0) to initialize the min and max. 
    double min, max, sum;
    min=values[0];
    max=values[0];
    sum=0;
    int size=values.size();
// •	Calculate min, max and sum. 
    for(int i=0;i<size;i++)
    {
        if(min >= values[i])
        {
            min=values[i];
        }
        if(max<= values[i])
        {
            max=values[i];
        }
        sum=sum+values[i];

    }
// •	Print min max and sum to the output file. 
out<<"The sum is : "<< sum<<endl;
out<<"The max is : "<< max<<endl;
out<<"The min is : "<< min<<endl;


}
int main()
{
    vector<double> values =readValues();
    printResults(values);
    cout<<"Check your output.txt for the values!!"<< endl;

    return 0;
}

