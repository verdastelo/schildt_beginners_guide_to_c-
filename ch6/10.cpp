/*
    This program returns a reference to an array element.
*/

#include <iostream> 

double vals[] = {1.1, 2.2, 3.3, 4.4, 5.5}; 

double &change_it (int i)
{
    return vals[i];
}

int main()
{
    std::cout << "The original values: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << vals[i] << ' '; 
        }
    std::cout << '\n'; 
    
    change_it(1) = 100.01;
    change_it(3) = -98.9;
    
    std::cout << "Here are the changed values: "; 
    for (int i = 0; i < 5; i++) {
        std::cout << vals[i] << ' '; 
        }
    std::cout << '\n'; 
    
    return 0;
}
