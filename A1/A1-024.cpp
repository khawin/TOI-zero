#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y, cc;
    cin >> y >> cc;
    if (y <= 1990)
    {
        if (cc <= 1500)
            cout << 1250;
        else if (cc <= 2000)
            cout << 1400;
        else
            cout << 2000;
    }
    else if (y <= 1999)
    {
        if (cc <= 1500)
            cout << 1100;
        else if (cc <= 2000)
            cout << 1300;
        else
            cout << 1700;
    }
    else
    {
        if (cc <= 1500)
            cout << 1000;
        else if (cc <= 2000)
            cout << 1200;
        else
            cout << 1500;
    }
    return 0;
}