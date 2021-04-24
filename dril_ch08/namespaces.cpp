#include <iostream>
using namespace std;

namespace X
{
    int var;

    void print()
    {
        cout << "namespace X var: " << var << "\n";
    }
}

namespace Y
{
    int var;

    void print()
    {
        cout << "namespace Y var: " << var << "\n";
    }   
}

namespace Z
{
    int var;

    void print()
    {
        cout << "namespace Z var: " << var << "\n";
    }
}

int main()
{
    X::var = 7;
    X::print();
    using namespace Y;
    var = 9;
    print();
    {
        using Z::var;
        using Z::print;
        var = 11;
        print();
    }
    print();
    X::print();
}