#include <bits/stdc++.h>
using namespace std;

int main()
{
    char size, type, topping;
    cin >> size >> type >> topping;
    int num = 1;
    cin >> num;
    map<pair<char, char>, int> ramenPrices = {
        {{'S', 'R'}, 60}, {{'S', 'T'}, 80}, {{'M', 'R'}, 80}, {{'M', 'T'}, 100}, {{'L', 'R'}, 100}, {{'L', 'T'}, 120}};
    int price = ramenPrices[{size, type}];
    if (topping == 'P')
        price += 15 * num;
    else if (topping == 'E')
        price += 10 * num;
    cout << price;
    return 0;
}
