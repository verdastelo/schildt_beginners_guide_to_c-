/*
    This program shows that a pointer cannot change the value
    stored into a const.
*/

#include <iostream> 

// negate() returns the negation of the value pointed to by its
// parameter. 

int negate (const int &v)
{
    int value = -*v; 
    return value; 
}

int main()
{
    int result; 
    int val = 10; 
    result = negate(&val); 
    std::cout << val << " negated is " << result; 
    std::cout << '\n';
    return 0;
}
