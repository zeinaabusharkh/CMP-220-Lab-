#include <iostream>
using namespace std;

//find the maximum value in an array 
double maxInArray(double **arr, int rows, int cols)
{
double max=arr[0][0];

for(int i =0; i<rows;i++)
{
    for(int k=0;k<cols;k++)
    {
       if(arr[i][k]>=max)
       {
            max=arr[i][k];
       }
    }
   
}
return max;

}

//find the minimum value in an array 
double minInArray(double **arr, int rows, int cols)
{
double min=arr[0][0];

for(int i =0; i<rows;i++)
{
    for(int k=0;k<cols;k++)
    {
       if(arr[i][k]<=min)
       {
            min=arr[i][k];
       }
    }
   
}
return min;

}




int main() {

int col, row;
cout<< "enter rows and cols :";
cin>> row>> col ;


//create a dynamic 2d array 
double **arr;
arr = new double*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new double[col];
    }

//get user input for the array 
   for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
//print the array 
for(int i =0; i<row;i++)
{
    for(int k=0;k<col;k++)
    {
        cout<<arr[i][k]<<" ";
    }
    cout<<endl;
}

//min and max values 
cout<<"Max value in the array is : "<< maxInArray(arr, row, col) <<endl ;
cout<<"Min value in the array is : "<< minInArray(arr, row, col) <<endl ;

//delete the pointer 
for (int i = 0; i < row; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;


return 0;
}


