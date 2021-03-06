/*
    This program reverses the characters in a string. 
*/

#include <iostream> 
#include <cstring> 

int main() 
{
    char string[] = "mi pona.";
    char *start; 
    char *end; 
    int len = 0; 
    char c = ' '; 
    
    std::cout << "Original: " << string << std::endl; 
    
    len = strlen(string); 
    
    start = string; 
    end = &string[len - 1]; 
    
    std::cout << start << ' ' << end << std::endl; 
    
    while (start < end) {
        c = *start; 
        *start = *end; 
        *end = c; 
        
        start++; 
        end--; 
        }
        
     std::cout << "Reversed: " << string << std::endl; 
     
     return 0; 
     
     }
