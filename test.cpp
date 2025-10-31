#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "What's your name? ";
    cin >> name;

    cout << "How old are you? ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    system("pause");
    return 0;
}
