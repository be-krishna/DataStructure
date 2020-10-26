#include <iostream>
using namespace std;

class Parent
{
private:
    int x;

protected:
    int y;

public:
    void Parentfunction()
    {
        x = 1;
        y = 2;
        cout << "\nParent Classs: ";
        cout << "\nx = " << x;
        cout << "\ny = " << y;
    }
    static void StaticParentFunction();
};

void Parent::StaticParentFunction()
{
    cout << "\nStatic Parent Function.";
}

class Child : public Parent
{
    int z;

public:
    static void StaticFunction()
    {
        cout << "\nStatic Function. ";
    }
    void ChildFunction()
    {
        // x = 2;
        y = 3;
        z = 1;

        cout << "\nChild Class: ";
        cout << "\ny = " << y;
        cout << "\nz = " << z;
    }
};

int main()
{
    system("cls");

    Child child;
    child.Parentfunction();
    child.ChildFunction();

    child.StaticFunction();

    child.Parent::StaticParentFunction();

    cout << endl;
}
