#include <bits/stdc++.h>
using namespace std;

struct Cars
{ // user defined data type
public:
    string name;
    string color;
    float price;
};

int main()
{
    int n;
    cin >> n;
    Cars a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].color >> a[i].price;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].color << " " << a[i].price << endl;
    }
}
