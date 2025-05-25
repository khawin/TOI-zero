#include <bits/stdc++.h>
using namespace std;

const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    int row, col, pokemonCnt;
    cin >> row >> col >> pokemonCnt;

    vector<vector<int>> grid(row, vector<int>(col, 0));

    for (int i = 0; i < pokemonCnt; i++)
    {
        int r, c;
        cin >> r >> c;
        if (r >= 0 && r < row && c >= 0 && c < col)
        {
            grid[r][c]++;
        }
    }

    int mxCatch = 0;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (grid[r][c] == 0)
            {
                int nearby = 0;
                for (int d = 0; d < 8; d++)
                {
                    int nr = r + dy[d], nc = c + dx[d];
                    if (nr >= 0 && nr < row && nc >= 0 && nc < col)
                    {
                        nearby += grid[nr][nc];
                    }
                }
                mxCatch = max(mxCatch, nearby);
            }
        }
    }

    cout << mxCatch;
}
