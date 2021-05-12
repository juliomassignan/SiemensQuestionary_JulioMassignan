/******************************************************************************

Techincal Assessment - Siemens Job Interview
Author: Julio Massignan
Date: 12th May 2021


Code and solution for question #4

*******************************************************************************/
#include "acutest.hpp"              // included librry for unit test framework (view reference: https://github.com/mity/acutest)
#include "libConcatRemove.hpp"      // library with my functions
#include <iostream>
using namespace std;


// Unit Test for ConcatRemove function
void test_ConcatRemove(void){
    // Test the constraints return exceptions
    cout << "\nTesting constraints... \n";
    TEST_EXCEPTION_(ConcatRemove("abcASde","abc",5), std::exception,"Not lowercase ASCII");
    TEST_EXCEPTION_(ConcatRemove("abde","aaDHKbc",5), std::exception,"Not lowercase ASCII");
    TEST_EXCEPTION_(ConcatRemove("abde","aaDHKbc",5), std::exception,"Not lowercase ASCII");
    TEST_EXCEPTION_(ConcatRemove("","aaDHKbc",5), std::exception,"String out of size");
    TEST_EXCEPTION_(ConcatRemove("aadas","aasadsaddagdgdgsgdggdgsgsgdashgahdgjhasgjhgasjhdgjsahgjdhgasjhdgsahgdjhgsajdgjashgdjhsagjhdgjgasdadasjhbc",5), std::exception,"String out of size");
    TEST_EXCEPTION_(ConcatRemove("abcd","abc",150), std::exception,"No. of operations larger than 100");
    
    // Checking if the results are ok
    cout << "\n\nTesting functionalities... \n";
    TEST_CHECK_(ConcatRemove("abcde","abc",5) == true, "ConcatRemove(%s,%s,%d) == %d","abcde","abc",5,true);
    TEST_CHECK_(ConcatRemove("abcde","abc",1) == false, "ConcatRemove(%s,%s,%d) == %d","abcde","abc",1,false);
    TEST_CHECK_(ConcatRemove("blablablabla","blablabcde",8) == true, "ConcatRemove(%s,%s,%d) == %d","blablablabla","blablabcde",8,true);
    TEST_CHECK_(ConcatRemove("blablablabla","blablabcde",4) == false, "ConcatRemove(%s,%s,%d) == %d","blablablabla","blablabcde",4,false);
    TEST_CHECK_(ConcatRemove("blablablabla","blablabcde",10) == true, "ConcatRemove(%s,%s,%d) == %d","blablablabla","blablabcde",10,true);
};


// List of tests to be performed (only one for the function ConcatRemove)
TEST_LIST = {
    {"void ConcatRemove(string s, string t, int k);", test_ConcatRemove},
    {0}
};