#include <bits/stdc++.h>
using namespace std;
int main()
{
    int totalCal = 0;

    char typeMuk;
    cin >> typeMuk;
    int totalMuk;
    cin >> totalMuk;
    if (typeMuk == 'H')
        totalCal += 5 * totalMuk;
    else if (typeMuk == 'O')
        totalCal += 3 * totalMuk;
    else
        totalCal += 2 * totalMuk;

    char typeCha;
    cin >> typeCha;
    int sweetLevel;
    cin >> sweetLevel;
    int totalCha;
    cin >> totalCha;
    int i = 0, j = 0;
    if (typeCha == 'R')
        i = 0;
    else if (typeCha == 'T')
        i = 1;
    else
        i = 2;
    j = sweetLevel - 1;
    int calCha[3][3] = {
        {12, 18, 25},
        {15, 20, 30},
        {10, 15, 20}};
    totalCal += totalCha * calCha[i][j];
    cout << totalCal;
    return 0;
}