#include <bits/stdc++.h>
using namespace std;
int main()
{
    int choice, totalCal = 0;
    while (true)
    {
        cin >> choice;
        if (choice == 5)
            break;
        if (choice == 1)
            totalCal += 100;
        if (choice == 2)
            totalCal += 120;
        if (choice == 3)
            totalCal += 200;
        if (choice == 4)
            totalCal += 60;
    }
    cout << "Bye Bye" << endl
         << "Total Calories: " << totalCal;
    return 0;
}

