#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;

    Student(char name[], int roll, double gpa)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->gpa = gpa;
    }
};

Student classFunc()
{
    Student a("Mr Rahim", 10, 4.8);
    return a;
}
int main()
{
    Student b = classFunc();

    cout << b.name << " " << b.roll << " " << b.gpa;
    return 0;
}
