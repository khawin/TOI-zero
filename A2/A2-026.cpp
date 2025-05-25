#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<string, int> p;
    int count = 0, mx_val = INT_MIN;
    string mx_name;
    while (n--)
    {
        cin >> p.first >> p.second;
        if (p.second > 15)
            count++;
        if (p.second >= mx_val)
        {
            mx_name = p.first;
            mx_val = p.second;
        }
    }
    cout << count << endl
         << mx_name << " " << mx_val;
    return 0;
}
