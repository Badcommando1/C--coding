/*a program to get the multiplication table of a given number up to 10
5 * 1 = 5*/

#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter a number: ";
    cin >> num;

    cout << num << " *" << " 1" << " = " << num * 1 << endl;
    cout << num << " *" << " 2" << " = " << num * 2 << endl;
    cout << num << " *" << " 3" << " = " << num * 3 << endl;
    cout << num << " *" << " 4" << " = " << num * 4 << endl;
    cout << num << " *" << " 5" << " = " << num * 5 << endl;
    cout << num << " *" << " 6" << " = " << num * 6 << endl;
    cout << num << " *" << " 7" << " = " << num * 7 << endl;
    cout << num << " *" << " 8" << " = " << num * 8 << endl;
    cout << num << " *" << " 9" << " = " << num * 9 << endl;
    cout << num << " *" << " 10" << " = " << num * 10 << endl;
    
    return 0;
}