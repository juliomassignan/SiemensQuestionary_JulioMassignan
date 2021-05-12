/******************************************************************************

Techincal Assessment - Siemens Job Interview
Author: Julio Massignan
Date: 12th May 2021


Code and solution for question #3

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
#include "libConcatRemove.hpp"


// -----------------------------------------------------------------------------
// Main source code with callable functions
int main()
{
    string s,t;     // input strings 
    int k;          // number of operations to be tested
    bool result;    // bool with the result of ConcatRemove
    
    // Input of string 's'
    cout << "String 's': \t";
	cin >> s;
	
	// Input of string 't'
	cout << "String 't': \t";
	cin >> t;
	
	// Input of number of operaions 'k'
	cout << "Number of operations 'k': \t";
	cin >> k;
	
	// Calls function to check the number of operations
	result = ConcatRemove(s,t,k);
	if (result) cout << "ConcatRemove: \t Yes\n";
	else cout << "ConcatRemove: \t No\n";
	

    return 0;
}


