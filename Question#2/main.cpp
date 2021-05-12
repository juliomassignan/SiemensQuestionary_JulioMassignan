/******************************************************************************

Techincal Assessment - Siemens Job Interview
Author: Julio Massignan
Date: 12th May 2021


Code and solution for question #2

*******************************************************************************/
#include <iostream>
using namespace std;


/* Function to print a list of numbers according to the questionary requirement
Inputs:
    int init: begin of the integer list
    int end: end of the integer list

Outputs:
    none (prints on the screen)

*/
void printLine_Q2(int init, int end){
    //---------------------------------------------
    // For loop to iterate over the list of numbers
    for (int i = init; i <= end; i++ ){
        // Test if multiple of 3 and 5 simultaneously
        if (((i % 3) == 0) && ((i % 5) == 0)){
            cout << "FooBaa" << "\n";		
        }
        // Test if multiple of 3 only
        else if ((i % 3) == 0) {
            cout << "Foo" << "\n";		
        }
        // Test if multiple of 5 only
        else if ((i % 5) == 0) {
            cout << "Baa" << "\n";		
        }
        // Otherwise print the number
        else{
            cout << i << "\n";		
        }
    }
}

// Main source code with callable function
int main()
{
    // Call function that print list of number according to the requirements, from 1 to 100
    printLine_Q2(1, 100);

    return 0;
}
