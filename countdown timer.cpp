//a program that takes a number from the user and countdowns to zero

#include <iostream>
using namespace std;
int main()
{
    int c = 0;

    cout << "Enter a number: ";
    cin >> c;

    while(c >= 0)
    {
        cout << c;
        c -= 1;
        cout << endl;
    }
    cout << "BLAST OFF!!!!!";
    return 0;
}