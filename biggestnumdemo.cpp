#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if(a > b && a > c)
    {
        cout << a << " is the greatest";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the greatest";
    }
    else
    {
        cout << c << " is the greatest";
    }
    return 0;
}