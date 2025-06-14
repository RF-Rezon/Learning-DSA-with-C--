#include <bits/stdc++.h>
using namespace std;

struct Student
{
public:
    // nm, cls, s, id, math_marks and eng_marks
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;

    void input()
    {
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
    }

    void output()
    {
        cout << nm << " " << cls << " " << s << " " << id << " " << math_marks << " " << eng_marks << " " << endl;
    }
};

bool cmp(Student left, Student right)
{
    if (left.eng_marks != right.eng_marks)
    {
        return left.eng_marks > right.eng_marks;
    }

    if (left.math_marks != right.math_marks)
    {
        return left.math_marks > right.math_marks;
    }

    return left.id < right.id;
}

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        students[i].input();
    }

    sort(students, students + n, cmp);

    for (int i = 0; i < n; i++)
    {
        students[i].output();
    }

    return 0;
}
