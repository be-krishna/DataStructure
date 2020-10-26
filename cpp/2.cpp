#include <iostream>
#include <string.h>

using namespace std;
class scopy
{
    char s1[50], s2[50];

public:
    friend void stringCopy();
};

void stringCopy()
{
    scopy obj1;
    int i, j, l;
    cout << "Enter any string: ";
    cin >> obj1.s1;
    l = strlen(obj1.s1);

    for (i = 0; i < l; i++)
    {
        obj1.s2[i] = obj1.s1[i];
    }

    cout << "\nEntered String: " << obj1.s1;
    cout << "\nCopied String: " << obj1.s2;
}

int main()
{
    stringCopy();
}
