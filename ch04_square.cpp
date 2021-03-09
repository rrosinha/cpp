#include "std_lib_facilities.h"

int square(int number)
{
    int squared = 0;
    for(int i = 0; i < number; ++i)
    {
        squared += number;
    }

    return squared;
}

int main()
{
    int number_to_square = 0;

    cout << "Please enter a integer number:\n";

    cin >> number_to_square;

    cout << "\n" << number_to_square << " squared is " << square(number_to_square);
}