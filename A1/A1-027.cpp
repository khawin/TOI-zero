#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
        str[i] = tolower(str[i]);
    for (int i = 0; i < str.length(); i++)
        cout << str[str.length() - 1 - i];
    return 0;
}
