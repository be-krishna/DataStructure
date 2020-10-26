#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[50];

public:
    int testInteger;

    void entery()
    {
        cout << "Enter string ";
        cin >> str;
    }

    friend void function();

    void reverse()
    {
        int length = strlen(str) - 1;
        int i = 0;

        char t;

        for (i = 0; i < strlen(str) / 2; i++)
        {
            t = str[i];
            str[i] = str[length];
            str[length] = t;

            length--;
        }
    }

    void show()
    {
        cout << "Reversed string: " << str;
    }

    static int hel;
};

int String::hel = 5;

void function(String string)
{
    cout << string.testInteger;
}

int main()
{
    system("cls");
    String s1;
    s1.entery();
    s1.reverse();
    s1.show();

    function(s1);

    

    cout << endl;
}
