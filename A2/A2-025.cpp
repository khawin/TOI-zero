#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;

    int arr[row][col];
    memset(arr, 0, sizeof(arr));

    int rabbRow, rabbCol, infCnt;
    cin >> rabbRow >> rabbCol >> infCnt;

    while (infCnt--)
    {
        int infRow, infCol;
        cin >> infRow >> infCol;
        arr[infRow][infCol] = 100;

        for (int i = max(0, infRow - 1); i <= min(row - 1, infRow + 1); i++)
        {
            for (int j = max(0, infCol - 1); j <= min(col - 1, infCol + 1); j++)
            {
                if (i == infRow && j == infCol)
                    continue;
                arr[i][j] = max(arr[i][j], 60);
            }
        }

        for (int i = max(0, infRow - 2); i <= min(row - 1, infRow + 2); i++)
        {
            for (int j = max(0, infCol - 2); j <= min(col - 1, infCol + 2); j++)
            {
                if (abs(i - infRow) <= 1 && abs(j - infCol) <= 1)
                    continue;
                arr[i][j] = max(arr[i][j], 20);
            }
        }
    }

    int safeCnt = 0;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr[i][j] == 0)
                safeCnt++;

    cout << safeCnt << '\n'
         << arr[rabbRow][rabbCol] << "%\n";
    return 0;
}
