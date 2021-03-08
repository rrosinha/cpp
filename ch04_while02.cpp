#include "std_lib_facilities.h"

int main()
{
    char letter = 'a';

    while (letter < 'z')
    {
        cout << letter << "\t" << int(letter) << "\n";
        ++letter;
    }
}