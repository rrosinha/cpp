#include "std_lib_facilities.h"

int main()
{
    //char lower = 'a';
    char upper = 'A';

    for (char lower = 'a'; lower <= 'z'; ++lower, ++upper)
    {
        cout << lower << "\t" << int(lower) << "\t" << upper << "\t" << int(upper) << "\n";
    }
}