// a program that find the biggest number

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

    cout << "Enter first number: "; 
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if(a > b && a > c)
    {
        cout << a << " is the biggest";
    }

    else if(b > a && b > c)
    {
        cout << b << " is the biggest";
    }

    else
    {
        cout << c << " is the biggest";
    }
    
    return 0;
}
