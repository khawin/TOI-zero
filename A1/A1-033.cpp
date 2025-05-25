#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    char vowel;
    for (int i = 0; i < n; i++)
    {
        cin >> vowel;
        if (vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
            count++;
    }
    cout << count;
    return 0;
}