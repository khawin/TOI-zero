#include <bits/stdc++.h>
using namespace std;
int main()
{
    int money;
    cin >> money;
    int tenCoin = money / 10;
    int fiveCoin = (money - tenCoin * 10) / 5;
    int twoCoin = (money - tenCoin * 10 - fiveCoin * 5) / 2;
    int oneCoin = money - tenCoin * 10 - fiveCoin * 5 - twoCoin * 2;
    cout << "10 = " << tenCoin << endl;
    cout << "5 = " << fiveCoin << endl;
    cout << "2 = " << twoCoin << endl;
    cout << "1 = " << oneCoin << endl;
    return 0;
}