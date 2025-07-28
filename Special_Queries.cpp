#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<string> line; // টিকিটের লাইন

    while (q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            // কেউ লাইনে দাঁড়ালো
            string name;
            cin >> name;
            line.push(name);
        }
        else if (command == 1)
        {
            // সামনের জন টিকিট নিল
            if (line.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << line.front() << endl;
                line.pop();
            }
        }
    }

    return 0;
}
