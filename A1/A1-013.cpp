#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    int a;
    cin >> a;
    if (c == 'H' && a == 4567)
        cout << "safe unlocked";
    else if (c == 'H')
        cout << "safe locked - change digit";
    else if (a == 4567)
        cout << "safe locked - change char";
    else
        cout << "safe locked";
    return 0;
}