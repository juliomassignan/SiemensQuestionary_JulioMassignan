# Siemens Questionary Julio Massignan

# Question #3


Files:

main.cpp: file with the interface of input/output
libConcatRemove.cpp : source code of each function for the ConcatRemove
libConcatRemove.hpp : header file of the functions


Solution Description:

For this question three functions were created:

1. checkOperationsConstraints() and checkStringConstraints: Two constraint checking functions to ensure the inputs are within the specified length and if the strings are all lowercase Portugues ASCII characters. If the constraints are not met, they return exceptions.

2. ConcatRemove(): A function to check if the number of operations of Remove followed by Concat will be possible with the specified threshold of operations. The first test calculates the length of characters that are equal between strings “s” and “t”. The required number of Remove operations will be equal the length of “s” minus the number of equal characters from the beginning of the string “s” and “t”. Finally, the number of Concat operations will be equal the remaining length of string “t”. 

The total number of operations is thesum of Remove followed by Concat operations. And the function tests if this number is less than the specified number of operations by the user.

# link: https://onlinegdb.com/rkL3JSw__

Just click on run and the program will ask for the inputs (s,t,k).

If any constraint are not met, exceptions will be thrown. Otherwise the program will print yes/no depending on the result of ConcatRemove.

