/*
    Create your own verrsion of the standard library
    function strlen(). Call your version mystrlen(), and
    demonstrate its use in a program. 
*/

#include <iostream> 
#include <cstring> 
#include <cctype> 

int mystrlen(char* sentence[]) 
{
    int count = 0; 
    
    for (int i = 0; *sentence; i++) {
        count++; 
     }
     
    std::cout << count << std::endl; 
    
    return count;
}

int main()
{
    char* name[80];
    
    std::cout << "Write your first name: "; 
    std::cin >> name; 
    
    mystrlen(*name); 
    
    return 0;
}
