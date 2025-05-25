#include <bits/stdc++.h>
using namespace std;
int diflength(string n1, string n2)
{
    int a = max(n1.length(), n2.length());
    int b = min(n1.length(), n2.length());
    return a - b;
}
int countW(string symbol)
{
    int countW = 0;
    int MostcountW = 0;
    for (int i = 0; i < symbol.length(); i++)
    {
        if (symbol[i] == 'w')
        {
            countW++;
            if (countW >= MostcountW)
                MostcountW = countW;
        }
        else
            countW = 0;
    }
    return MostcountW;
}
int main()
{
    string n1;
    cin >> n1;
    string n2;
    cin >> n2;
    int dif = diflength(n1, n2);
    for (int i = 0; i < dif; i++)
    {
        if (n1.length() < n2.length())
            n1 += n1[i];
        else
            n2 += n2[i];
    }
    string symbol = "";
    int count = 0;
    for (int i = 0; i < n1.length(); i++)
    {
        if (tolower(n1[i]) == 'l' || tolower(n1[i]) == 'o' || tolower(n1[i]) == 'v' || tolower(n1[i]) == 'e' ||
            tolower(n2[i]) == 'l' || tolower(n2[i]) == 'o' || tolower(n2[i]) == 'v' || tolower(n2[i]) == 'e')
        {
            symbol += 'w';
            count++;
        }
        else
            symbol += '$';
    }
    if (count % 2 == 0)
    {
        if (countW(symbol) >= 2)
            cout << symbol;
        else
            cout << symbol << "#";
    }
    else
    {
        cout << symbol << countW(symbol);
    }
    return 0;
}
