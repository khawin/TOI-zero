#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    vector<int> v;
    int x;

    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        if (s.find(x) == s.end())
        {
            s.insert(x);
            v.push_back(x);
        }
    }
    for (int x : v)
        cout << x << " ";
    return 0;
}