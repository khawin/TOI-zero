#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char curr = s[0];
    int count = 1;
    for (int i = 1; i < 5; i++)
    {
        if (curr == s[i])
        {
            count++;
        }
        else
        {
            cout << count << curr;
            curr = s[i];
            count = 1;
        }
    }
    cout << count << curr;
    return 0;
}