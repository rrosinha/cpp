#include "std_lib_facilities.h"

int main()
{
    int val1;
    int val2;

    cout << "Please enter two integer values (separated by a space): ";
    cin >> val1 >> val2;

    if (val1 < val2)
    {
        cout << "\nSmaller: " << val1;
    }

    if (val2 < val1)
    {
        cout << "\nSmaller: " << val2;
    }

    if (val1 > val2)
    {
        cout << "\nLarger: " << val1;
    }

    if (val2  > val1)
    {
        cout << "\nLarger: " << val2;
    }

    cout << "\nSum: " << val1 + val2;
    cout << "\nDifference: " << val1 - val2;
    cout << "\nProduct: " << val1 * val2;
    cout << "\nRatio: " << val1 / val2;
}