#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, n;
    cin >> l;
    vector<char> s1(l), s2(l);

    for (int i = 0; i < l; i++)
        cin >> s1[i];
    for (int i = 0; i < l; i++)
        cin >> s2[i];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        char c;
        cin >> a >> b >> c;
        if (a == 1)
            s1[b] = c;
        else
            s2[b] = c;
    }

    for (int i = 0; i < l; i++)
    {
        cout << s1[i] << (i + 1 < l ? ' ' : '\n');
    }
    for (int i = 0; i < l; i++)
    {
        cout << s2[i] << (i + 1 < l ? ' ' : '\n');
    }

    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        char a = s1[i], b = s2[i];
        if (!((a == 'A' && b == 'T') || (a == 'T' && b == 'A') ||
              (a == 'C' && b == 'G') || (a == 'G' && b == 'C')))
            cnt++;
    }
    cout << cnt;
    return 0;
}
