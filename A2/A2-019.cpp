#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s_up;
    cin >> s;
    for (char c : s)
        s_up += toupper(c);

    if (s_up.find("BUU") != string::npos)
    {
        int mx = 0;
        for (int i = 0; i < s_up.size(); i++)
        {
            if (s_up[i] == 'B')
            {
                int j = i + 1, cnt = 0;
                while (j < s_up.size() && s_up[j] == 'U')
                    cnt++, j++;
                mx = max(mx, cnt);
            }
        }
        cout << "Yes " << mx << '\n';
    }
    else if (s_up.find('B') != string::npos)
    {
        bool ch = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (ch)
                s[i] = 'U';
            if (toupper(s[i]) == 'B')
                ch = true;
        }
        cout << s << '\n';
    }
    else
    {
        char a[3] = {'B', 'U', 'U'};
        for (int i = 0; i < s.size(); i++)
            cout << a[i % 3];
    }
    return 0;
}
