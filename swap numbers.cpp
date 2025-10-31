#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, temp = 0;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Before swapping:" << endl  << "a = "<< a << endl << "b = " << b << endl << "c = " << c << endl;
    
    temp =a;
    a = b;
    b = c;
    c = temp;

    cout << "After swapping:" << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c;
    return 0;
}