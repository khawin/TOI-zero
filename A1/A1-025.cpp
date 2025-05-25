#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string rank;
    char suit;
    if (str.length() == 2)
        rank = str[0];
    else
        rank = str.substr(0, 2);
    suit = str.back();

    string arrRank[14] = {"", "ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king"};
    int n;
    if (rank == "A" || rank == "a")
        n = 1;
    else if (rank == "J" || rank == "j")
        n = 11;
    else if (rank == "Q" || rank == "q")
        n = 12;
    else if (rank == "K" || rank == "k")
        n = 13;
    else
        n = stoi(rank);
    cout << arrRank[n] << " of ";

    if (suit == 'D' || suit == 'd')
        cout << "diamonds";
    else if (suit == 'H' || suit == 'h')
        cout << "hearts";
    else if (suit == 'S' || suit == 's')
        cout << "spades";
    else
        cout << "clubs";
    return 0;
}