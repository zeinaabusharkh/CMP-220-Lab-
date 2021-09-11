// You have the following file format: 
//"input.txt"
// 40854 60 71 59
// 50415 70 78 85
// 60634 98 98 99

// Each line is consists of the following information: 
//the student id ( int), the grade for the first midterm,
// the grade for the second midterm and the grade for the final midterm 
//and it represents one student. 
// Assume all grades are out of 100 and of type int. 

// Write a program to read the file and save the content in a vector
// of vectors of type double (vector<vector<double>>), in which each student 
//is saved as a vector of doubles (vector<double>), where each row is representing
// a student. And then print to the user the id and the average grade for every 
//student.
// The average grade is 0.25*mid1_grade + 0.25*mid2_grade+0.5*final_grade.

////////////////////

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream in("input.txt");
    if(in.fail())
    {
        cout<<"Error!! cannot open file!!"<<endl;
        exit(1);

    }
    vector<vector<double> > gradebook;
    double id, m1,m2,f;
    while(in>>id>>m1>>m2>>f)
    {
        vector <double> student;
        student.push_back(id);
        student.push_back(m1);
        student.push_back(m2);
        student.push_back(f);
        gradebook.push_back(student);
    }


   
    for(int i=0;i<gradebook.size();i++)
    {
        cout<<"Student #"<<i << " id : "<<gradebook[i][0]<< " , m1 : "<< gradebook[i][1] << " , m2 : "<< gradebook[i][2]<< " , final : "<< gradebook[i][3]<<endl;
        cout<< "Student Average = "<<  0.25*gradebook[i][1] + 0.25*gradebook[i][2]+0.5*gradebook[i][3] <<endl;
    }

}
