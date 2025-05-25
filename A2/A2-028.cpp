#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    string s1, s2;
    bool ch = 1;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; i++)
    {
        if ((s1[i] - '0') + (s2[i] - '0') != 9)
        {
            ch = 0;
            cnt++;
        }
    }
    if (ch)
        cout << "YES";
    else
        cout << "NO" << " " << cnt;
    return 0;
}
