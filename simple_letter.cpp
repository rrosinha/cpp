#include "std_lib_facilities.h"

int main()
{
    // 1. prompt the user for the name and display letter title
    string first_name;
    cout << "Enter the name of the person you want to write to: ";
    cin >> first_name;
    cout << "\nDear " << first_name <<",\n\n";

    // 2. Add an introductory line or 2
    cout << "\tHow have you been ? I'm trying to learn C++ again. You now how i am, ";
    cout << "learn something then leave it alone for a few months without touching it again, and then ...\n";
    cout << "Well, you guessed it, have to 're-learn' it all again just for fun.";

    // 3. prompt the user for a friend and output some words
    string another_friend;
    cout << "\n\nTell me the name of a friend of yours: ";
    cin >> another_friend;
    cout << "\nHave you seen " << another_friend <<" latelly ?";
    
    // 4. ask if friend is male or female
    char friend_sex = '0';

    cout << "\nIs your friend male or female (m - male, f - female): ";
    cin >> friend_sex;
    if (friend_sex == 'm')
    {
        cout << "\nIf you see " << another_friend << " ask him to call me.";
    }
    if (friend_sex == 'f')
    {
        cout << "\nIf you see " << another_friend << " ask her to call me.\n";
    }

    //5. age operations
    int age = 0;

    cout << "How old are you: ";
    cin >> age;
    cout << "\nI heard you just had a birthday and your " << age << " years old!\n";

    if (age <= 0 || age >= 100)
    {
        simple_error("you're kidding!");
    }

    // 6. a few more age operations
    if (age < 12)
    {
        cout << "\nNext year you will be " << age + 1 << ".";
    }
    if (age == 17)
    {
        cout << "\nNext year you will be able to vote.";
    }
    if (age > 70)
    {
        cout << "\nI hoipe you are enjoying your retirement.";
    }

    // 7. terminate the letter
    cout << "\n\nYours sincerely\n\nRicardo Rosinha";

}