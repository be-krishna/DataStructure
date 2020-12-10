#include <iostream>
using namespace std;

class BinaryOverload
{
    int x;

public:
    BinaryOverload(int n)
    {
        x = n;
    }
    BinaryOverload operator+(BinaryOverload &p1)
    {
        BinaryOverload obj(0);
        obj.x = x + p1.x;
        return (obj);
    }

    void show()
    {
        cout << "\nx = " << x;
    }
};

int main()
{
    system("cls");
    BinaryOverload obj1(5), obj2(10), obj3(0);

    obj1.show();
    obj2.show();
    obj3.show();

    obj3 = obj1 + obj2;

    obj1.show();
    obj2.show();
    obj3.show();

    cout << endl;
}
