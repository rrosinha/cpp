// get name and age from user

#include "std_lib_facilities.h"

int main()
{
    cout << "Please, enter your name and age: ";
    string name = "???";
    double age = 0;

    cin >> name >> age;
    // cin >> age;

    cout << "Hello, " << name << ". You are " << age * 12 << " months old !";
}