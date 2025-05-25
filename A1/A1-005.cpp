#include <bits/stdc++.h>
using namespace std;
int main()
{
    int month, day;
    cin >> month >> day;
    if (day >= 21)
        month++;
    if (month > 12)
        month = 1;
    if (month == 1 || month == 2 || month == 3)
        cout << "winter";
    if (month == 4 || month == 5 || month == 6)
        cout << "spring";
    if (month == 7 || month == 8 || month == 9)
        cout << "summer";
    if (month == 10 || month == 11 || month == 12)
        cout << "fall";
    return 0;
}