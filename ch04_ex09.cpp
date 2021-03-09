#include "std_lib_facilities.h"

int main()
{
    int square = 1;
    double grains = 1;
    vector<double> grains_per_square = {1};

    while (square < 64)
    {
        square += 1;
        grains *=2;
        //cout << grains << "\n";
        grains_per_square.push_back(grains);
    }
    //cout << "grains: " << grains << " squares: " << square << "\n";

    // Output a simple table with the results
    cout << "\nDistribution table\n";
    cout << "squares\t\tgrains\n";
    for (int i = 0; i < grains_per_square.size(); ++i)
    {
        cout << i + 1 << "\t\t" << grains_per_square[i] << "\n";
    }
}