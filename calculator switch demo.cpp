// calculator mini project

#include <iostream>
using namespace std;

int main()
{
    int p1 = 0, p2 = 0, calc = 0;

    cout << "Enter a number: ";
    cin >> p1;
    cout << "Enter another number: ";
    cin >> p2;

    cout << "CALCULATOR MENU" << endl << "Enter operation needed" << endl;
    cout << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl; 
    cin >> calc;

    switch(calc)
    {
        case 1:
        cout << p1 << " + " << p2 << " = " << p1 + p2 << endl;
        break;

        case 2:
        cout << p1 << " - " << p2 << " = " << p1 - p2 << endl;
        break;

        case 3:
        cout << p1 << " * " << p2 << " = " << p1 * p2 << endl;
        break;

        case 4:
        cout << p1 << " / " << p2 << " = " << p1 / p2 << endl;
        break;

        default:
        cout << "Invalid output";
    }
    return 0;
}