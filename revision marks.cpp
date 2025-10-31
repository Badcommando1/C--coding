//revision of students that passed

#include <iostream>
using namespace std;

int main()
{
    char ram;
    cout << "Enter a character: ";
    cin >> ram;

    if(ram >= 'A' && ram <= 'Z')
    {
        cout << ram << " is UPPERCASE";
    }

    else if(ram >= 'a' && ram <= 'z' )
    {
        cout << ram << " is lowercase";
    }

    else
    {
        cout << "Invalid output";
    }
    return 0;
}