#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    int row = -1, col = -1;
    for (int i = 0; i < 5; i++)
    {
        int sumRow = 0, sumCol = 0;
        for (int j = 0; j < 5; j++)
        {
            sumRow += a[i][j];
            sumCol += a[j][i];
        }
        if (sumRow % 2 != 0)
            row = i;
        if (sumCol % 2 != 0)
            col = i;
    }
    cout << row << " " << col << endl;

    return 0;
}
