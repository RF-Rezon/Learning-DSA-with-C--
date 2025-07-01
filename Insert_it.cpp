#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> array1(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array1[i];
    }

    int m;
    cin >> m;
    vector<int> array2(m);

    for (int i = 0; i < m; i++)
    {
        cin >> array2[i];
    }
    int p;
    cin >> p;

    array1.insert(array1.begin() + p, array2.begin(), array2.end());

    for (int num : array1)
    {
        cout << num << " ";
    }
}