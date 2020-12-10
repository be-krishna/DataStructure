#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char ch;
    ofstream fout("bca");

    system("cls");

    cout << "\nEnter information about bca: \n";

    while ((ch = cin.get()) != EOF)
    {
        fout << ch;
    }
    fout.close();

    ifstream fin("bca");

    cout << "\nContent of BCA: \n";
    while (fin)
    {
        fin >> noskipws >> ch;
        cout << ch;
    }
    fin.close();
}
