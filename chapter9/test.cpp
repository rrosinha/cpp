#include "../std_lib_facilities.h"

class Name_pairs
{
    public:
        void read_names();
        void read_ages();
        void print();
        void sort();
        // default constructor
        Name_pairs();


    private:
        vector<string> name;
        vector<double> age;
}; // end class

// default constructor implementation
Name_pairs::Name_pairs()
    :name{}, age{}
    {
        
    }

void Name_pairs::read_names()
{
    string myname = "";
    while(myname != "q")
    {
        cin >> myname; 
        name.push_back(myname);

    }
}

void Name_pairs::read_ages()
{
    int myage = 0;
    while(myage != -1)
    {
        cin >> myage;
        age.push_back(int(myage));
    }
}

void Name_pairs::print()
{
    for(const string& i: name)
    {
        cout << i << "\n";
    }
}


// Testing Name_pairs implementation
int main()
{
    Name_pairs test;

    cout << "Testing the Name_pairs class\n\n";
    cout << "Enter names (q to quit):\n";
    test.read_names();
    cout << "\nEnter ages (-1 to quit):\n";
    test.read_ages();
    cout << "\nPrint names and ages:\n";
    test.print();

}