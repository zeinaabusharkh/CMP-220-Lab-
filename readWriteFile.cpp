
#include<iostream>
#include <fstream>
using namespace std;

void printResults(double *arr,int size)
{
    //open file 
    ofstream out("output.txt");

    
    double min , max , sum ;
    min =arr[0] ;
    max=0;
    sum=0;

    for(int i =0; i<size;i++)
    {
       
        if(arr[i]>=max)
        {
            max=arr[i];
        }
        if(arr[i]<=min)
        {
            min=arr[i];
        }
        sum=arr[i]+sum;
    }
    cout<<endl;
//print the values of min max sum 
    out<<"max value : "<<max <<endl;
    out<<"min value :" <<min <<endl;
    out<<"sum is : "<<sum<<endl;
    
    out.flush();
	out.close();


}

//open file and read the content 
//-------input.txt
//7
// 22.2  1.433  6  9.443
// 2.44  5.33  2.33 
double* readArray(int &size)
{
        double *arr;
        ifstream myfile;
        myfile.open ("input.txt");
        if (myfile.is_open()) //if file is open 
        {
            myfile>>size;  //get the first element in the file which is the number of values 
            arr= new double[size];

            //read all values and store in array 
            for(int i =0; i<size ;i++)
            {
                myfile>> arr[i];
                cout<< arr[i]<< "  "; //print the values 
            }
            cout<<endl;
            myfile.close();
            
    }

    else { //if file not open  print this error msg and exit 
        cout << "Unable to open file"<<endl;
        exit(1);
    }

    //return the array 
    return arr;

    
}


int main()
{
   int size;
   double *arr= readArray(size);
   printResults(arr, size);
   delete []arr;
    return 0;
}

