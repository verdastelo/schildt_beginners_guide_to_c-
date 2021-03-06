/*
    Use a 2-D array of pointers to create a dictionary. 
*/

#include <iostream> 
#include <cstring> 

int main() 
{
    char *dictionary[][2] = {
        "pencil", "A writing instrument",
        "keyboard", "An input device", 
        "rifle", "A shoulder-fired firearm",
        "airplane", "A fixed-win aircraft",
        "network", "An interconnected group of computers",
        " ", " ", 
        }; 
        
    char word[80]; 
    int i = 0; 
    
    std::cout << "Enter word here: " << std::endl; 
    std::cin >> word; 
    
    for (i = 0; *dictionary[i][0]; i++) {
        if(!strcmp(dictionary[i][0], word)) {
            std::cout << dictionary[i][1] << std::endl; 
            break; 
         }
     }
     
     if (!*dictionary[i][0]) {
        std::cout << word << " not found." << std::endl; 
        }
        
     return 0; 
     
}
