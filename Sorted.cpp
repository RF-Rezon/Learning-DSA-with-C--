#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int nicearray[n];

        for (int i = 0; i < n; i++)
        {
            cin >> nicearray[i];
        }

        bool sorted = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (nicearray[i] > nicearray[i + 1])
            {
                sorted = false;
                break;
            }
        }

        cout << (sorted ? "YES\n" : "NO\n");
    }
}