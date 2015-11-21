/*
    Assigns value to a variable through a pointer. 
*/

#include <iostream> 

int main() {
    int *ptr = 0; 
    int val = 0; 
    
    ptr = &val; 
    
    *ptr = 1000; 
    
    for (*ptr = 1000; *ptr < 1100; (*ptr)++) {
        std::cout << val << " is " << *ptr << std::endl; 
        std::cout << val << "'s address is " << ptr << std::endl; 
        }
        
    return 0; 
    }
        
