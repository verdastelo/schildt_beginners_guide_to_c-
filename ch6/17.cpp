/*
    Demonstrates two customized versions of strcat().
*/

#include <iostream> 
#include <cstring> 

void mystrcat (char *s1, char *s2, int len)
{
    while (*s1) {
        s1++;
    }
    
    if (len == 0) {
        len = strlen(s2);
        }
        
     while ((*s2) && (len)) {
        *s1 = *s2;
        s1++;
        s2++;
        len--;
     }
     
     *s1 = '\0';
}

int main()
{
    char str1[80] = "This is amazing."; 
    char str2[80] = "0111234214";
    
    mystrcat (str1, str2, 5); 
    std::cout << str1 << '\n'; 
    
    strcpy (str1, "What is this?");
    std::cout << str1 << '\n'; 
    
    return 0;
}
