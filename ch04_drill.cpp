#include "std_lib_facilities.h"

int main()
{
    char sentinel = '|';

    double val1;
    double val2;

    while (cin >> val1 >> val2)
    {
        if (val1 < val2)
        {
            cout << "The smaller value is: " << val1 << " The larger value is: " << val2 << "\n";
            
            if(val2 - val1 <= 1.0/100)
            {
                cout << "The values are almost equal.\n";
            }
        }
        else if (val1 > val2)
        {
            cout << "The smaller value is: " << val2 << " The larger value is: " << val1 << "\n";
            
            if(val1 - val2 <= 1.0/100)
            {
                cout << "The values are almost equal.\n";
            }
        }
        else
        {
            cout << "The values are equal!\n";
        }
        
    }
}