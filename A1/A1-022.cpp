#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, m;
    cin >> d >> m;
    if (d >= 22 && m == 12 || d <= 19 && m == 1)
        cout << "capricorn";
    else if (d >= 20 && m == 1 || d <= 18 && m == 2)
        cout << "aquarius";
    else if (d >= 19 && m == 2 || d <= 20 && m == 3)
        cout << "pisces";
    else if (d >= 21 && m == 3 || d <= 19 && m == 4)
        cout << "aries";
    else if (d >= 20 && m == 4 || d <= 20 && m == 5)
        cout << "taurus";
    else if (d >= 21 && m == 5 || d <= 21 && m == 6)
        cout << "gemini";
    else if (d >= 22 && m == 6 || d <= 22 && m == 7)
        cout << "cancer";
    else if (d >= 23 && m == 7 || d <= 22 && m == 8)
        cout << "leo";
    else if (d >= 23 && m == 8 || d <= 22 && m == 9)
        cout << "virgo";
    else if (d >= 23 && m == 9 || d <= 23 && m == 10)
        cout << "libra";
    else if (d >= 24 && m == 10 || d <= 21 && m == 11)
        cout << "scorpio";
    else
        cout << "sagittarius";
    return 0;
}