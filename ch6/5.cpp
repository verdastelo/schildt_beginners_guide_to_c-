/*
    Return a reference to an array element.
*/

#include <iostream> 

double &change_it (int i); 

double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5 }; 

int main()
{
    int i; 
    std::cout << "Here are the original values: "; 
    for (i = 0; i < 5; i++) {
        std::cout << vals[i] << ' '; 
        }
    std::cout << '\n'; 
    
    change_it(1) = 5298.23; 
    change_it(2) = -98.8;
    
    std::cout << "Here are the changed values: "; 
    for (i = 0; i < 5; i++) {
        std::cout << vals[i] << ' '; 
        }
    std::cout << '\n'; 
    
    return 0;
}

double &change_it (int i)
{
    return vals[i]; 
}
