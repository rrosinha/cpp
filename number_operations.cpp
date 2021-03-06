#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter a number: ";

    // double number;
    int number;

    cin >> number;

    cout << "number == " << number
        << "\nthree times number == " << number * 3
        << "\nnumber times two == " << number + number
        << "\nnumber squared == " << number * number
        << "\nhalf of number == " << number / 2
        << "\nsqure root of number == " << sqrt(number)
        << "\n";
}