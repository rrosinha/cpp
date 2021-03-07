#include "std_lib_facilities.h"

int main()
{
    int val1;
    int val2;
    int val3;

    cout << "Please enter 3 integers: \n";

    cin >> val1 >> val2 >> val3;

    int min = val1;
    int middle = val2;
    int max  = val3;
    int temp;
    
    //cout << "\n" << min << ", " << middle;

    if (val1 >= val2)
    {
        min = val2;
        middle = val1;
    }
    //cout << "\n" << min << ", " << middle << ", " << max;

    if (min >= max)
    {
        int temp = min;
        min = max;
        max = temp;
    }
    //cout << "\n" << min << ", " << middle << ", " << max;

    if (middle >= max)
    {
        int temp = max;
        max = middle;
        middle = temp;
    }

    cout << "\n" << min << ", " << middle << ", " << max;

}