# Siemens Questionary Julio Massignan

# Question #3


Solution Description:

For this question two functions were created:

First, a constraint checking to ensure the inputs are within the specified length and if the strings are all lowercase Portugues ASCII characters.

Second, the test check if the number of operations of Remove followed by Concat will be possible with the specified threshold of operations. The first test calculates the length of characters that are equal between strings “s” and “t”. The required number of Remove operations will be equal the length of “s” minus the number of equal characters from the beginning of the string “s” and “t”. Finally, the number of Concat operations will be equal the remaining length of string “t”. 

The total number of operations is thesum of Remove followed by Concat operations. And the function tests if this number is less than the specified number of operations by the user.

# link: https://onlinegdb.com/rkL3JSw__


