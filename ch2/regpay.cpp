#include <iostream> 
#include <cmath> 

using namespace std; 

int main(void) {

    double Principal; // Original principal. 
    double IntRate; // Interest rate, such as 0.75%
    double PayPerYear; // Number of payments each year. 
    double NumYears; // Number of years. 
    double Payment; // The regular payment. 
    double numer, denom; // Temporary work variables. 
    double b, e; // Base and exponent for call to pow(). 
    
    cout << "Enter principal: "; 
    cin >> Principal; 
    
    cout << "Enter interest rate (i.e. 0.75): "; 
    cin >> IntRate;
    
    cout << "Enter number of payments per year: "; 
    cin >> PayPerYear;
    
    cout << "Enter number of years: "; 
    cin >> NumYears; 
    
    numer = IntRate * Principal / PayPerYear; 
    
    e = - (PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1; 
    
    denom = 1 - pow(b,e); 
    
    Payment = numer / denom; 
    
    cout << "Payment is " << Payment << endl; 
    
    cout << "Total interest paid over the years is: " << 
        (Payment * PayPerYear * NumYears) - Principal << endl; 
    
    return 0; 
    }

