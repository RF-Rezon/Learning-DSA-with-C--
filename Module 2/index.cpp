#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;

    Student(char n[], int r, double g)
    {
        strcpy(name, n);
        roll = r;
        gpa = g;
    }
};

int main()
{
    Student a("Mr Rahim", 10, 4.8);

    cout << a.name << " " << a.roll << " " << a.gpa;
    return 0;
}
