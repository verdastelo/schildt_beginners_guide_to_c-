/*
    This program demonstrates function prototypes.
*/

void square (int *i) 
{
    *i = *i * *i; 
}

int main()
{
    int x = 10; 
    int y = &x; 
    square(*y); 
    
    return 0;
}
