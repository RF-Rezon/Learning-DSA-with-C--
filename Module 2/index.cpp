#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a;
    cin.getline(a.name, 100);
    cin.ignore();
    cin >> a.roll >> a.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa;
    return 0;
}
