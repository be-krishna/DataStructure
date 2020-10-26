
#include <iostream>
using namespace std;

int main()
{
    char name[80];
    cout << "Enter name: ";
    cin.getline(name, 20);
    cout << "\nName: ";
    cout.write(name, 10);
    cout << "\nName: " << name;
}
