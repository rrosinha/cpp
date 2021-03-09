#include "std_lib_facilities.h"

int main()
{
    int square = 1;
    int grains = 1;
    vector<int> grains_squares = {1};

    while (grains <= 1000)
    {
        square += 1;
        grains *=2;
        //cout << grains << "\n";
        grains_squares.push_back(grains);
    }
    cout << "grains: " << grains << " squares: " << square << "\n";

    // Output a simple table with the results
    cout << "\nDistribution table\n";
    cout << "squares\t\tgrains\n";
    for (int i = 0; i < grains_squares.size(); ++i)
    {
        cout << i + 1 << "\t\t" << grains_squares[i] << "\n";
    }
}