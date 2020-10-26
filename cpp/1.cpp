#include <iostream>
using namespace std;

class Student
{
    char sname[50], course[50];
    int roll;

public:
    void show();
    void entry()
    {
        cout << "\nEnter your name: ";
        cin >> sname;
        cout << "\nEnter your roll: ";
        cin >> roll;
        cout << "\nEnter your course: ";
        cin >> course;
    }
};

void Student::show()
{
    cout << "Your name is " << sname << endl;
    cout << "You are student of " << course << endl;
    cout << "And your roll is " << roll;
}

int main()
{
    Student student;
    student.entry();
    student.show();
}
