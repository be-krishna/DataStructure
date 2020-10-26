#include <iostream>
using namespace std;

class Armstrong
{
    int i, remainder, sumOfDigits;

public:
    Armstrong()
    {
        i = 1;

        cout << "Armstrong no between 1-500 are: " << endl;
        while (i < 500)
        {
            int copyOfI = i;
            sumOfDigits = 0;
            while (copyOfI > 0)
            {
                remainder = copyOfI % 10;
                sumOfDigits = sumOfDigits + (remainder * remainder * remainder);
                copyOfI = copyOfI / 10;
            }
            if (sumOfDigits == i)
            {
                cout << sumOfDigits << endl;
            }
            i = i + 1;
        }
    }
};

int main()
{
    system("cls");

    Armstrong obj;

    cout << endl;
}
