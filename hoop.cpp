// program to print the table of input no
#include <iostream>
using namespace std;

int main()
{
    int ren = 0, i = 1;

    cout << "Enter a number: ";
    cin >> ren;

    while(i <= 12)
    {
        cout << ren << " * " << i << " = " << ren * i;
        i += 1;
        cout << endl;
    }
    return 0;
}
