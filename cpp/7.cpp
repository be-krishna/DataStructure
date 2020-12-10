#include <iostream>
using namespace std;

int main()
{
    char line[80], ch;
    int i = 0;
    system("clear");
    cout << "\nEnter a sentence: ";
    while ((ch = cin.get()) != EOF) //use ctrl + z to break
    {
        line[i] = ch;
        i++;
    }

    line[i] = '\0';

    cout << "\nThe line is: ";
    i = 0;

    while (line[i] != '\0')
    {
        ch = line[i];
        cout.put(ch);
        cout << endl;
        i++;
    }
}
