/*
    This program demonstrates bubble sort. 
*/ 

#include <iostream> 
#include <cstdlib> 

int main() {
    int numbers[10]; 
    int a = 0; 
    int b = 0; 
    int t = 0; 
    
    int size = 10; 
    
    // Put some random numbers into the array. 
    for (int t = 0; t < size; t++) {
        numbers[t] = rand();
        }
    
    // Print the array. 
    for (int t = 0; t < size; t++) {
        std::cout << numbers[t] << ", " ; 
        std::cout << '\n'; 
        }
        
    // This is the algorithm for Bubble sort. 
    for (int a = 1; a < size; a++) {
        for (int b = (size-1); b >= a; b--) {
            if (numbers[b-1] > numbers[b]) {
                t = numbers[b-1];
                numbers[b-1] = numbers[b];
                numbers[b] = t;
                }
          }
     }
     
     // Display the sorted array. 
     std::cout << "The sorted array is: " << std::endl; 
     for (int t = 0; t < size; t++) {
        std::cout << numbers[t] << ", " << std::endl; 
        }
     
     return 0; 
     }
