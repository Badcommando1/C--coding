//a program to find the total and average of 4 numbers

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0, total = 0;
    float average = 0;

    cout << "Enter 4 numbers: " << endl;
    cin >> a >> b >> c >> d;

    total = a + b + c + d;
    average = total/4;

    cout << "Total = " << total << endl << "Average = " << average;
    return 0;
}