//cpp program complex no addition
//operator overloading
#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

protected:
    int test;

public:
    int hello;
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;

        return result;
    }

    Complex operator-(Complex const &obj)
    {
        Complex result;
        result.real = real - obj.real;
        result.imag = imag - obj.imag;

        return result;
    }

    void print()
    {
        cout << real << " + i" << imag << endl;
    }
};

int main()
{
    system("cls");

    Complex num1(10, 20), num2(20, 5);

    Complex nume;

    Complex pres = num1 + num2;
    Complex nres = num1 - num2;

    pres.print();
    nres.print();

    cout << endl;
}
