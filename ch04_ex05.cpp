#include "std_lib_facilities.h"

int main()
{
    double val1;
    double val2;
    char operation;
    double result;

    while (operation != '!')
    {
        cout << "Enter 2 operands and the operation to perform: \n";
        cin >> val1 >> val2 >> operation;

        if (operation == '+')
        {
            result = val1 + val2;
            cout << val1 << " plus " << val2 << " = " << result << "\n";
        }
        else if (operation == '-')
        {
            result = val1 - val2;
            cout << val1 << " minus " << val2 <<" = " << result << "\n";
        }
        else if (operation == '*')
        {
            result = val1 * val2;
            cout << val1 << " times " << val2 <<" = " << result << "\n";
        }
        else if (operation == '/')
        {
            result = val1 / val2;
            cout << val1 << " divided by " << val2 <<" = " << result << "\n";
        }
        else
        {
            cout << "Don't know that operation yet (maybe in another version)\n";
        }
    }
}