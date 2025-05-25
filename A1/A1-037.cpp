#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    string result = "";
    for (int i = 0; i < 13; i++)
    {
        while (n >= values[i])
        {
            result += roman[i];
            n -= values[i];
        }
    }

    cout << result << endl;
    return 0;
}
