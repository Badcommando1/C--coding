/* a program to find to area and perimeter of a rectangle
Area = L * B
Perimeter = 2(L+B)*/

#include <iostream>
using namespace std;

int main()
{
    int length = 0, breadth = 0, area = 0, perimeter = 0;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2*(length + breadth);

    cout << "Area = " << area << " cm." << endl;
    cout << "Perimeter = " << perimeter << " cm.";
    return 0;
}