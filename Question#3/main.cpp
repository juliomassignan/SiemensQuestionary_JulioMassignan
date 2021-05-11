/******************************************************************************

Techincal Assessment - Siemens Job Interview
Author: Julio Massignan
Date: 12th May 2021


Code and solution for question #3

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;



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
        cout << "Number of operations '"<< k << "' does not have the predefined size (" << minSize << " , " << maxSize <<  ") \n";
        exit(1);
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
        cout << "String '"<< str_input << "' does not have the predefined size (" << minSize << " , " << maxSize <<  ") \n";
        check_result = false;
    }
    
    // Check each character if it is lowercase Portuguese ASCII: [a-z] = [97, 122]
    for(int i=0; i < str_input.length(); i++){
        if ( ((int)str_input[i] < 97) || ((int)str_input[i] > 122) ){
		    cout << "String '"<< str_input << "' is not lowercase Portuguese ASCII \n";
            check_result = false;
            break;
		}
	}
    
    // End program if contraints are not attended
    if (!check_result)
        exit(1);
    
}

/*  Function ConcatRemove according to the questionary requirements - Test the ammount of Concat and Remove 
    operations are required to modify string s into string t
Inputs:
    string s: 
    string s: 
    int k: number of operations being tested

Outputs:
    none (prints on the screens)

*/
void ConcatRemove(string s, string t, int k){
    int countOps = 0;       // counter for the number of operations required
    int i = 0;              //iterator of the strings
    
    
    // Remove characters of s until get the first part of the string t
    // equals the length of s minus the number of initial characters that are equal both for s and t
    while ((s[i] == t[i]) && (s[i] != '\0')) i++;
     
    countOps = s.length() - i;
    
    // Concat the last characters of t into s to obtain s equals to
    // equals the remaining characters of t that are different and should be concatenated
    countOps = countOps + t.length() - i;

    // Check if the number of operations is less than specified threshold
    if (countOps < k)
        cout << "Conversion possible:   yes";
    else
        cout << "Conversion possible:   no";
    
}

// -----------------------------------------------------------------------------
// Main source code with callable functions
int main()
{
    string s,t;     // input strings 
    int k;          // number of operations to be tested
    
    // Input of string 's'
    cout << "String 's': \t";
	cin >> s;
	checkStringConstraints(s,1,100);
	
	// Input of string 't'
	cout << "String 't': \t";
	cin >> t;
	checkStringConstraints(t,1,100);
	
	
	// Input of number of operaions 'k'
	cout << "Number of operations 'k': \t";
	cin >> k;
	checkOperationsConstraints(k,1,100);
	
	
	// Calls function to check the number of operations
	ConcatRemove(s,t,k);
	

    return 0;
}

