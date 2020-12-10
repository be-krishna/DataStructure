#include <iostream>
using namespace std;

class Fibo
{

public:
    int firstn, secondn, nextn;
    Fibo()
    {
        firstn = 0;
        secondn = 1;
    }

    void operator++(int)
    {
        nextn = firstn + secondn;
        firstn = secondn;
        secondn = nextn;

        cout << nextn << endl;
    }
};

int main()
{
    system("cls");

    Fibo f;
    cout << f.firstn << endl;
    cout << f.secondn << endl;

    for (int i = 0; i < 10; i++)
    {
        f++;
    }

    cout << endl;
}
