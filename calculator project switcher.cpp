//a calcualtor program to switch between operations
// 5 + 5 = 10

#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, ope = 0;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "CALCULATOR MENU:" << endl << "Enter the corresponding number for the operation" << endl;
    cout << "1. +" << endl << "2. -" << endl << "3. *" << endl << "4. /" << endl;
    cin >> ope;

    switch(ope)
    {
        case 1:
        cout << num1 << " +" << num2 << " = " << num1 + num2 << endl;
        break;
        
        case 2:
        cout << num1 << " -" << num2 << " = " << num1 - num2 << endl;
        break;

        case 3:
        cout << num1 << " *" << num2 << " = " << num1 * num2 << endl;
        break;

        case 4:
        cout << num1 << " /" << num2 << " = " << num1 / num2 << endl;
        break;

        default:
        cout << "Invalid output";
    }

    return 0;
}