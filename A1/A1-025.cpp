#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    char k = s.back();
    s.pop_back();
    if (s == "Q" || s == "q") cout << "queen";
    else if (s == "J" || s == "j") cout << "jack";
    else if (s == "A" || s == "a") cout << "ace";
    else if (s == "K" || s == "k") cout << "king";
    else cout << s;
    cout << " of ";
    k = toupper(k);
    if (k == 'D') cout << "diamonds";
    else if (k == 'H') cout << "hearts";
    else if (k == 'S') cout << "spades";
    else cout << "clubs";
}