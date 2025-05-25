#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, p;
    cin >> l >> p;
    int rb = 0, mn = 0, fr = 0, a, b, c;
    cin >> a >> b >> c;
    while (p--)
    {
        int x, y;
        cin >> x >> y;
        if (x % a == 0)
            rb += y;
        if (x % b == 0)
            mn += y;
        if (x % c == 0)
            fr += y;
    }
    if (rb == max({rb, mn, fr}))
        cout << "Rabbit " << rb << '\n';
    if (mn == max({rb, mn, fr}))
        cout << "Monkey " << mn << '\n';
    if (fr == max({rb, mn, fr}))
        cout << "Frog " << fr << '\n';
    return 0;
}
