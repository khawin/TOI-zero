#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    cout << num / 1000 << "," << num - (num / 1000) * 1000;
    return 0;
}