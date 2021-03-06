/*
    This program reverses the case (upper- and lowercase)
    of characters in a string. 
    It accesses an array through a pointer.
*/

#include <iostream> 
#include <cctype> 

int main() 
{
    char *ptr;
    char frazo[80] = "Aleksandro estas princo.";
    
    std::cout << "Originala frazo: " << frazo << std::endl; 
    
    ptr = frazo; 
    
    for (int i = 0; ptr[i]; i++) {
        if (isupper(ptr[i])) {
            ptr[i] = tolower(ptr[i]);
            }
        else if (islower(ptr[i])) {
            ptr[i] = toupper(ptr[i]);
            }
     }
      
    std::cout << "Interŝanĝitaj literoj de la frazo: " << frazo << std::endl;
    
    return 0;
    
}
