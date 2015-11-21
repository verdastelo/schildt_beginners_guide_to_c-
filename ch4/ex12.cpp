/* 
    Demonstrates use of pointers. 
    * and &.
*/

#include <iostream> 

int main() {
    int total = 3200; 
    int *ptr = &total; 
    int val = *ptr; 
    
    std::cout << "Value " << val 
              << " is stored at " << ptr 
              << std::endl; 
              
    return 0;
    }
    
    
