#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    char status;
    cin >> age >> status;
    if (age <= 18 || status == 's' || status == 'S')
        cout << 20;
    else
        cout << 50;
    return 0;
}
