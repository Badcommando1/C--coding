// a program to determine if a number is a multiple of 3

#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter a number : ";
    cin >> num;

    if(num % 3 == 0)
    {
        cout << num << " is a multiple of 3";
    }

    else
    {
        cout << num << " is not a multiple of 3";
    }
    return 0;
}