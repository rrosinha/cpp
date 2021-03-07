#include "std_lib_facilities.h"

int main()
{
    double km_per_mile = 1.609;

    double miles;

    cout << "Please enter the number of miles: ";
    cin >> miles;

    cout << miles << " miles are equivalent to " << miles * km_per_mile << " kilometers !";
}