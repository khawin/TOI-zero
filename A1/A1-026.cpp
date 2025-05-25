#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    int even = 0;
    int odd = 0;
    cin >> a >> b >> c;
    if (a % 2 == 0)
        even++;
    else
        odd++;
    if (b % 2 == 0)
        even++;
    else
        odd++;
    if (c % 2 == 0)
        even++;
    else
        odd++;
    cout << "even " << even << endl
         << "odd " << odd << endl;
    return 0;
}