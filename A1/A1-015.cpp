#include <bits/stdc++.h>
using namespace std;
int main()
{
    string fname, lname;
    int age;
    cin >> fname >> lname >> age;
    string ageStr = to_string(age);

    if (fname.length() > 5 && lname.length() > 5)
    {
        cout << fname.substr(0, 2)
             << lname.back()
             << ageStr.back();
    }
    else
    {
        cout << fname[0]
             << ageStr
             << lname.back();
    }
    return 0;
}