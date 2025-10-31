#include <iostream>
using namespace std;

int main()
{
    int i = 1, sum = 0;
    while(i <= 10)
    {
        sum += i;
        i++;
    }
    cout << "the sum of the first 10 natural number is " << sum;
    return 0;
}