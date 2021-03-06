/*
    Create overloaded print() and println() functions
    that display various types of data.
*/

#include <iostream> 

void println (bool b)
{
    if (b) {
        std::cout << "true\n";
        }
    else
        std::cout << "false\n";
}

void println (int i)
{
    std::cout << i << std::endl;
}

void println (long i)
{
    std::cout << i << std::endl;
}

void println (char ch)
{
    std::cout << ch << std::endl;
}

void println (char *str)
{
    std::cout << str << std::endl;
}

void println (double d)
{
    std::cout << d << std::endl;
}

void print(bool b)
{
    if (b) {
        std::cout << "true";
        }
    else 
        std::cout << "false"; 
}

void print (int i)
{
    std::cout << i;
}

void print (long i)
{
    std::cout << i;
}

void print (char ch)
{
    std::cout << ch;
}

void print (char *str)
{
    std::cout << str;
}

void print (double d)
{
    std::cout << d;
}

int main()
{
    println(true);
    println(10);
    println("This is amazing!");
    println('x');
    println(99L);
    println(13.3);
    
    print("These are some values.");
    print(false);
    print(' ');
    print(88);
    print(' ');
    print(100000L);
    print(' ');
    print(100.01);
    
    println("Done!");
    
    return 0;
}
