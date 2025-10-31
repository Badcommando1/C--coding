// A C++ program to dtermine if a character is uppercase or lowercase

#include <iostream>
using namespace std;

int main()
{
    char chaz;

    cout << "Enter a letter: ";
    cin >> chaz;

    if(chaz >= 'A' && chaz <= 'Z')
    {
        cout << chaz << " is Uppercase";
    }

    else if(chaz >= 'a' && chaz <= 'z')
    {
        cout << chaz << " is lowercase";
    }

    else
    {
        cout << "Invalid output";
    }
    
    return 0;
}