#include <bits/stdc++.h>
using namespace std;

struct Cars
{ // user defined data type
public:
    string name;
    string color;
    float price;
};

bool cmf(Cars l, Cars r) // 😂 Kisui dilam na taw reveive korse
{
    return (l.price > r.price) ? true : false;
}

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
    sort(a, a + n, cmf); // 😂 cmf function e kichu kintu pathai nai!
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].color << " " << a[i].price << endl;
    }
}
