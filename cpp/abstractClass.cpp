// abstractClass.cpp

#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void speed() = 0;
};

class twoWheeler : public Vehicle
{
public:
    void speed()
    {
        cout << "Two wheeler!" << endl;
    }
};

class threeWheeler : public Vehicle
{
public:
    void speed()
    {
        cout << "Three wheeler!" << endl;
    }
};

int main()
{
    system("cls");

    Vehicle *v;

    twoWheeler two;
    threeWheeler three;

    

    cout << endl;
}
