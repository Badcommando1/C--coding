// a program to check if a number falls in between 100 and 200

#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter any number: ";
    cin >> num;

    if(num >=100 && num <= 200)
    {
        cout << num << " falls between 100 and 200";
    }

    else
    {
        cout << num << " does not fall between 100 and 200";
    }
    
    return 0;
}