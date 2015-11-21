/*
    This program looks up the square of a number
    from a 2-D array. 
*/

#include <iostream> 

int main() {
    int i = 0; 
    
    int square[10][2] = {
    {1, 1},
    {2, 4},
    {3, 9},
    {4, 16},
    {5, 25},
    {6, 36},
    {7, 49}, 
    {8, 64},
    {9, 81},
    {10, 100},
    }; 
    
    std::cout << "Enter a number between 1 and 10: " << std::endl; 
    std::cin >> i; 
    
    for (int j = 0; j < 10; j++) {
        if (square[j][0] == i) {
            std::cout << "The square of " 
                      << i << " is " 
                      << square[j][1] << "." << std::endl;
            }
        }
        
    return 0; 
    
    }
