#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    if (y > 1582)
    {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            cout << "yes";
        else
            cout << "no";
    }
    else
    {
        if (y % 4 == 0)
            cout << "yes";
        else
            cout << "no";
    }
    return 0;
}