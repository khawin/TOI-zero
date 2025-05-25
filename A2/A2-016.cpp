#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c1, c2;
    string n1, n2;
    cin >> c1 >> n1 >> c2 >> n2;
    bool cm = (c1 == c2), nm = (n1 == n2), last3n = (n1.substr(2) == n2.substr(2)), last2n = (n1.substr(3) == n2.substr(3));
    int ans = 0;
    if (cm && nm)
        ans = 1000000;
    else if (nm)
        ans = 100000;
    else if (cm && last3n)
        ans = 2000;
    else if (cm && last2n)
        ans = 1000;
    else if (last3n)
        ans = 200;
    else if (last2n)
        ans = 100;
    else if (cm)
        ans = 20;
    cout << ans;
    return 0;
}