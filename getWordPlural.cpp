#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>
using namespace std; 
 char* changeToPlural(char*input_string)
    {
        //find len of input string 
        int lenght= strlen(input_string);
        char* copy = new char[100]; //create a array with defualt value of 100 as size
        strcpy(copy, input_string);

         // 1.	if noun ends in “y” remove the “y” and add “ies”
        if(input_string[lenght-1] == 'y')
        {
            copy[lenght-1]='i';
            strcat(copy,"es");
        }
        
        // 2.	if noun ends in “s”  or “sh” add “es”
        else if(input_string[lenght-1] == 's'|| ( input_string[lenght-2] == 's'&& input_string[lenght-1] == 'h' ))
        {
            strcat(copy,"es");
        }

        // 3.	all other cases just  add “s”
        else
        {
            strcat(copy,"s");

        }
        return copy;

    }

int main()
{
    //input array of type char 
	char *word = new char[100];
    //user input
	cout << "Please enter a word : ";
	cin >> word;
    //get the Plural of the word by calling the function 
	char *out = changeToPlural(word);
    //print the plural 
	cout << "The plural is : " <<  out<< endl;
    //delete the char arrays 
	delete[]word;
	delete[]out;
}


   

   









// char* change_to_plural(char* input_string)
// {
//     // 1.	if noun ends in “y” remove the “y” and add “ies”
//     // 2.	if noun ends in “s”  or “sh” add “es”
//     // 3.	all other cases just  add “s”
	
//     int len=strlen(input_string); //get the lenght of the string 
//     char*output = new char[100]; //create a output array type char with defualt size 100 
// 	strcpy(output, input_string); //copy input_string into the new array output 
// 	if (input_string[len - 1] == 'y')
// 	{
// 		output[len - 1] = 'i';
// 		strcat(output, "es");
// 	}
// 	else if (input_string[len - 1] == 's')
// 	{
// 		strcat(output, "es");
// 	}
// 	else if (input_string[len - 1] == 'h'&&input_string[len - 2] == 's')
// 	{
// 		strcat(output, "es");
// 	}
// 	else
// 	{
// 		strcat(output, "s");
// 	}
// 	return output;
// }




