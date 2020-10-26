#include <iostream>
using namespace std;

class Obj
{
    int n;

public:
    Obj(int x)
    {
        n = x;
    }
    Obj(Obj &p, Obj &q)
    {
        n = p.n + q.n;
    }
    void show()
    {
        cout << "\nn = " << n;
    }

    ~Obj()
    {
        cout << "Clearing Screen.";
        system("cls");
        cout << "Screen Cleared.";
    }
};

int main()
{
    system("cls");

    Obj obj1(10), obj2(20);
    Obj obj3(obj1, obj2);

    obj1.show();
    obj2.show();
    obj3.show();

    cout << endl;
}
