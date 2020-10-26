#include <iostream>
using namespace std;

class UnaryOverload
{
    int n;

public:
    UnaryOverload(int x)
    {
        n = x;
    }
    void operator++()
    {
        n = n + 5;
    }
    void operator++(int)
    {
        n = n + 5;
    }
    void show()
    {
        cout << "\nn = " << n;
    }
};

int main()
{
    system("cls");

    UnaryOverload obj(10);

    obj.show();
    ++obj;
    obj.show();
    obj++;
    obj.show();

    cout << endl;
}
