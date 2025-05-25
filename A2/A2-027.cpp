#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mx = INT_MIN, n, cnt = 0;
    vector<int> score;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        score.push_back(x);
        if (x > mx)
        {
            mx = x;
            cnt = 1;
        }
        else if (x == mx)
            cnt++;
    }
    cout << mx << endl
         << cnt;

    return 0;
}
