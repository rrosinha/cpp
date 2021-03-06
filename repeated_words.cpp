#include "std_lib_facilities.h"

int main()
{
    int number_of_words = 0; //initialize a counter for the words
    string previous = " "; // initialize previous to not a word"
    string current;

    while (cin >> current)
    {
        ++number_of_words;
        if (previous == current)
        {
            cout << "repeated word: " << current << " at position: " << number_of_words << "\n";
        }
        previous = current;
    }
}