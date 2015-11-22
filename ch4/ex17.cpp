/*
    This program shows that a string is essentially an array
    of characters. 
    It also shows that a string can be assigned to a pointer. 
    
    P.S. The program displays a warning, but compiles.  
    
    ex17.cpp:12:9: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]

*/

#include <iostream> 

int main() 
{
    char *ptr; 
    ptr = "Pointers add power to C++.\n"; 
    std::cout << ptr; 
    return 0;
}
