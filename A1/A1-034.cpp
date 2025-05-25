#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        x = min(x, y);
    }
    cout << x;
    return 0;
}