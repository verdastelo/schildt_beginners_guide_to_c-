/*
    This function returns a reference.
*/

#include <iostream> 

double val = 100.0; 

double &function()
{
    return val;
}

int main()
{
    double x = 0; 
    std::cout << function() << '\n'; // display val's value 
    x = function(); // assign val's value to x 
    std::cout << x << '\n'; 
    function() = 99.1; 
    std::cout << function() << '\n'; 
    return 0;
}
