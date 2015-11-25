/*
    Write a recursive function that prints the numbers 1 through 10.
    Demonstrate its use in a program.
*/

#include <iostream> 

int to_10 (int n) 
{
    if (n < 11) { 
        n++; 
        std::cout << n << std::endl; 
        }
        
    to_10 (n); 
}

int main()
{
    to_10 (0); 
    return 0; 
}
