#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;
    for(x = 6; x > 0; x--)
    {
        for(y = 0; y < x - 1; y++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}