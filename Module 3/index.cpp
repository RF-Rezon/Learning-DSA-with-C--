#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "My name is khan";

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i];
    // }

    // With Iteratior
    for (auto i = s.begin(); i < s.end(); i++)
    {
        cout << *i;
    }
}
