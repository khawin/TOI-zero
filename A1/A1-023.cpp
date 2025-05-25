#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    char c;
    cin >> c;
    if (c == 'C')
    {
        if (x <= 0)
            cout << "solid";
        else if (x >= 100)
            cout << "gas";
        else
            cout << "liquid";
    }
    else
    {
        if (x <= 32)
            cout << "solid";
        else if (x >= 212)
            cout << "gas";
        else
            cout << "liquid";
    }
    return 0;
}