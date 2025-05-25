#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int vowels = 0;
    for (int i = 0; i < 3; i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
    cout << vowels;
    return 0;
}