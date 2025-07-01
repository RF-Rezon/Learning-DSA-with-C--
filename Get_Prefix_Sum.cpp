#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long niceArray[n];
    cin >> niceArray[0];

    for (int i = 1; i < n; i++)
    {
        int num;
        cin >> num;
        niceArray[i] = niceArray[i - 1] + num;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << niceArray[i] << " ";
    }
}