#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i || i == n - 1)
                cout << "0 ";
            else
                cout << "1 ";
        }
        cout << endl;
    }
    return 0;
}
