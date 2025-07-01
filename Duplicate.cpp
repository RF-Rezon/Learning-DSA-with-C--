#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nicearray[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nicearray[i];
    }

    bool ache = false;

    sort(nicearray, nicearray + n);

    for (int i = 0; i < n; i++)
    {
        if (nicearray[i] == nicearray[i + 1])
        {
            ache = true;
            break;
        }
    }

    cout << (ache ? "YES" : "NO");
}