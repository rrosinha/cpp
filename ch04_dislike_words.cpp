#include "std_lib_facilities.h"

int main()
{
    string dislike = "Broccoli";

    vector<string> words;

    for(string temp; cin >> temp;)
    {
        if (temp == dislike)
            temp = "BLEEP";
        words.push_back(temp);

    }

    for(string item: words)
        cout << item << "\n";
}