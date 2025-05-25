#include <bits/stdc++.h>
using namespace std;
int factorail(int n)
{
    if (n == 0)
        return 1;
    return n * factorail(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorail(n);
    return 0;
}