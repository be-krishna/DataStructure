#include <iostream>
using namespace std;

class Uover
{
    int n;

public:
    Uover(int x)
    {
        n = x;
    }
    void operator++()
    {
        n = n + 5;
    }
    void show()
    {
        cout << "\n n = " << n;
    }
};

int main()
{
    system("cls");
    Uover u(10);

    ++u;
    u++;
    u.show();

    cout << endl;
}
