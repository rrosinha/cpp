#include "std_lib_facilities.h"

double ctok(double c) // converts celsius to kelvin
{
    double k = c + 273.15; // changed type to double
    return k; // changed return variable
}

int main()
{
    double c = 0;
    cin >> c; // changed inpu variable name
    double k = ctok(c); // change function argument type
    cout << k << "\n"; // changed type of slash 
}