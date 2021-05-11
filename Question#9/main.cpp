/******************************************************************************

Techincal Assessment - Siemens Job Interview
Author: Julio Massignan
Date: 12th May 2021


Code and solution for question #9

*******************************************************************************/
#include <iostream>
using namespace std;


/* My personalized version of the string length calculation
Inputs:
    char *string: string which teh lenght will be calculated

Outputs:
    int length the calculated string length

*/
int strlen_alternative(char *string){
    int length = 0;
    
    // Iterate over each charcater of the string
    while (string[length] != '\0'){    
        length++;
    }    
    
    // return the length of the string as an integer
    return (length);
}



// Main source code with callable function
int main()
{
    char string[] = "Test string for question 9";   // String to be tested
    int length_str = 0;                             // Integer with the length of the string
    
    length_str = strlen_alternative(string);        // Calling the created function
    cout << "String length: "<< length_str << endl; // Print the string length on the screen
    
    return 0;
}


