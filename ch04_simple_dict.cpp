#include "std_lib_facilities.h"

int main()
{
    // this vector will hold the words
    vector<string> words;
    // read word from user input and add them to vector
    for(string temp; cin >> temp;)
    {
        words.push_back(temp);
    }
    cout << "\nNumber of words: " << words.size() << "\n";

    // sort the words
    sort(words);

    // display words with no repetitiong
    for(int i = 0; i < words.size(); ++i)
    {
        if (i == 0 || words[i-1] != words[i])
        {
            cout << words[i] << "\n";
        }
    }

}