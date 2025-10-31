//a program that adds two numbers

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, sum = 0;

    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    sum = a + b;

    cout << "Sum = " << sum;
    return 0;
}