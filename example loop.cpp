#include <iostream>
using namespace std;

int main()
{
    int bie = 0;
    cout << "Enter a number: ";
    cin >> bie;

    for(int i = 1; i <= 10; i++)
    {
        cout << bie << " * " << i << " = " << bie * i <<endl;
    }
    return 0;
}