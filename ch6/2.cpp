/*
    Calling an argument by its reference.
*/

#include <iostream> 

void swap(int* x, int* y); 

int main()
{
    int i = 10; 
    int j = 20; 
    
    std::cout << "Initial values of i and j: "
              << i << " and " << j 
              << std::endl; 
              
    swap(&i, &j); 
    
    std::cout << "Swapped values of i and j: " 
              << i << " and " << j
              << std::endl; 
              
    return 0; 
}

void swap (int* x, int* y) 
{
    int temp = 0; 
    temp = *x; 
    *x = *y; 
    *y = temp; 
}
