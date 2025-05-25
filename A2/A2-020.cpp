#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    vector<bool> check(n + 1, false);

    int mxRound = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            int current = i;
            int round = 0;

            while (!check[current])
            {
                check[current] = true;
                current = v[current];
                round++;
            }

            mxRound = max(mxRound, round);
        }
    }
    cout << mxRound;
    return 0;
}
