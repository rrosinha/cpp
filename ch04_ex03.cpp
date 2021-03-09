#include "std_lib_facilities.h"

int main()
{

    int min = 0;
    int max = 100;
    int user_number;
    int counter = 1;

    int pc_number = 50;

    cout << "Enter a number between 0 and 100: ";
    cin >> user_number;

    cout << pc_number << "\n";

    while (pc_number != user_number)
    {
        if (user_number > pc_number)
        {
            min = pc_number;
            pc_number = (min + max) / 2;
        }
        if (user_number < pc_number)
        {
            max = pc_number;
            pc_number = (min + max) / 2;
        }
        ++counter;
        cout << pc_number << "\n";
    }

    cout << "User number was: " << user_number << "\n";
    cout << "it took " << counter << " tries, to guess the number "  << pc_number;
}