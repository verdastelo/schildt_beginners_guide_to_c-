/*
    This program defines and calls a function other than main(). 
*/

#include <iostream> 

int prints_something()
{
    std::cout << "Где моя книга?" << std::endl;
    return 0; 
}

int main()
{
    std::cout << "This is main(). " << std::endl; 
    prints_something(); 
    std::cout << "We are back in main(). " << std::endl; 
    
    return 0; 
}



