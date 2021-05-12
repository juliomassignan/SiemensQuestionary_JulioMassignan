/******************************************************************************

Techincal Assessment - Siemens Job Interview
Author: Julio Massignan
Date: 12th May 2021


Code and solution for question #3

library ConcatRemove

*******************************************************************************/
#include "libConcatRemove.hpp"

/* Function that checks if the number of operations comply with constraints of size
Inputs:
    int k: number of operations
    int minSize: minimum allowable length for the number of operations
    int maxSize: maximum allowable length for the number of operations

Outputs:
    none (prints on the screens)

*/
void checkOperationsConstraints(int k, int minSize, int maxSize){
    // Check number of operations
    if ((k > maxSize) || (k < minSize)){
        throw invalid_argument( "Number of operations does not have the predefined size (1,100)");
    }
}



/* Function that checks if strings comply with constraints of size and Portuguese ASCII
Inputs:
    string str_input: the input string to check the constraints
    int minSize: minimum allowable length for the string
    int maxSize: maximum allowable length for the string

Outputs:
    none (prints on the screens)

*/
void checkStringConstraints(string str_input, int minSize, int maxSize){
    bool check_result = true;   // if false exit 
    
    // Check size of string
    if (((int) str_input.size() > maxSize) || ((int) str_input.size() < minSize)){
        throw invalid_argument( "String does not have the predefined size (1,100)");
    }
    
    // Check each character if it is lowercase Portuguese ASCII: [a-z] = [97, 122]
    for(int i=0; i < str_input.length(); i++){
        if ( ((int)str_input[i] < 97) || ((int)str_input[i] > 122) ){
            throw invalid_argument( "String is not lowercase Portuguese ASCII");
            break;
		}
	}
    
}

/*  Function ConcatRemove according to the questionary requirements - Test the ammount of Concat and Remove 
    operations are required to modify string s into string t
Inputs:
    string s: 
    string s: 
    int k: number of operations being tested

Outputs:
    bool

*/
bool ConcatRemove(string s, string t, int k){
    int countOps = 0;       // counter for the number of operations required
    int i = 0;              //iterator of the strings
    bool check_result = false; // yes/no result
    
    
	checkOperationsConstraints(k,1,100);
    checkStringConstraints(s,1,100);
    checkStringConstraints(t,1,100);
    
    // Remove characters of s until get the first part of the string t
    // equals the length of s minus the number of initial characters that are equal both for s and t
    while ((s[i] == t[i]) && (s[i] != '\0')) i++;
     
    countOps = s.length() - i;
    
    // Concat the last characters of t into s to obtain s equals to
    // equals the remaining characters of t that are different and should be concatenated
    countOps = countOps + t.length() - i;

    // Check if the number of operations is less than specified threshold
    if (countOps <= k){
        check_result = true;
    }
    else{
        check_result = false;
    }
    
    // function return a bool depending if possible to modify string in less operations than threshold
    return(check_result);
    
}
