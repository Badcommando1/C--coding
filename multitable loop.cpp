// a program to print multiplication table based on user input

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int i = 1;

    cout << "Enter a number: ";
    cin >> num;

    while(i <= 12)
    {
        cout << num << " * " << i << " = " << num * i << endl;
        i++;
    }
    return 0;
}