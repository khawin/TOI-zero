#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = n; i >= 0; i--)
        if (i % 10 == 0)
            cout << i << " ";
    return 0;
}