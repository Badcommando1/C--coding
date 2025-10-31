// a program to get quotient and remainder

#include <iostream>
using namespace std;

int main()
{
    int dividend = 0, divisor = 0, quotient = 0, remainder = 0;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "After Calculations" << endl << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}