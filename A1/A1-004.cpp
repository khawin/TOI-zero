#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ex, mid, fin;
    cin >> ex >> mid >> fin;
    if (ex >= 10 * 0.5 && mid >= 40 * 0.5 && fin >= 50 * 0.5)
        cout << "pass" << endl;
    else
        cout << "fail" << endl;
    return 0;
}