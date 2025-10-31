//a program to determine if a student passed

#include <iostream>
using namespace std;

int main()
{
    int marks = 0;

    cout << "Input your marks: ";
    cin >> marks;

    if(marks >= 60 && marks <= 100)
    {
        cout << "You passed." << endl << "Welcome to 200Lvl";
    }

    else if(marks >= 0 && marks < 60)
    {
        cout << "You failed" << endl << "Proceed to repeat the class";
    }

    else
    {
        cout << "Invalid output";
    }
    return 0;
}