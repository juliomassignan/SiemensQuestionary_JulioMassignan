/******************************************************************************

Techincal Assessment - Siemens Job Interview
Author: Julio Massignan
Date: 12th May 2021


Code and solution for question #3

Header file for the lib ConcatRemove

*******************************************************************************/

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

/* Function that checks if the number of operations comply with constraints of size
Inputs:
    int k: number of operations
    int minSize: minimum allowable length for the number of operations
    int maxSize: maximum allowable length for the number of operations

Outputs:
    none (prints on the screens)

*/
void checkOperationsConstraints(int k, int minSize, int maxSize);

/* Function that checks if strings comply with constraints of size and Portuguese ASCII
Inputs:
    string str_input: the input string to check the constraints
    int minSize: minimum allowable length for the string
    int maxSize: maximum allowable length for the string

Outputs:
    none (prints on the screens)

*/
void checkStringConstraints(string str_input, int minSize, int maxSize);


/*  Function ConcatRemove according to the questionary requirements - Test the ammount of Concat and Remove 
    operations are required to modify string s into string t
Inputs:
    string s: 
    string s: 
    int k: number of operations being tested

Outputs:
    none (prints on the screens)

*/
bool ConcatRemove(string s, string t, int k);