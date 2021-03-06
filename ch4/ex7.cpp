/*
    Schildt's demonstration of string functions. 
*/ 

#include <iostream> 
#include <cstdio> 
#include <cstring> 

int main() {
    char sen1[80]; 
    char sen2[80];
    
    strcpy(sen1, "C++"); 
    strcpy(sen2, " is a powerful programming language."); 
    
    std::cout << "Lengths: " << strlen(sen1)
              << ' ' << strlen(sen2) << std::endl; 
              
    if (!strcmp(sen1, sen2)) {
        std::cout << "The strings are equal." << std::endl; 
        }
        
    else 
        std::cout << "No equal." << std::endl; 
        
    strcat(sen1, sen2); 
    
    std::cout << sen1 << std::endl; 
    
    strcpy(sen2, sen1); 
    std::cout << sen1 << " and " << sen2 << std::endl; 
    
    if (!strcmp(sen1, sen2)) {
        std::cout << "sen1 and sen2 are identical now." << std::endl; 
        }
        
        
    return 0; 
    }
