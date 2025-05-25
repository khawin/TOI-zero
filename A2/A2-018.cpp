#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    int n;
    cin >> c >> n;
    for (int i = 0; i < n; i++)
    {
        if (c == 'R')
        {
            cout << "Red ";
            c = 'G';
        }
        else if (c == 'G')
        {
            cout << "Green ";
            c = 'B';
        }
        else
        {
            cout << "Blue ";
            c = 'R';
        }
    }
    return 0;
}
