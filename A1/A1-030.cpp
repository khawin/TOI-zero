#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> num;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        num.push_back(max(a, b));
    }
    for (int i = 0; i < num.size(); i++)
    {
        if (n != 1)
            cout << num[i];
        sum += num[i];
        if (i != num.size() - 1)
            cout << " + ";
    }
    if (n != 1)
        cout << " = ";
    cout << sum;
    return 0;
}
// int n;cin >> n;
// int sum = 0;
// for (int i = 0; i < n; i++) {
//     int a, b;
//     cin >> a >> b;
//     int max_value = max(a, b);
//     if(n!=1) cout << max_value;
//     if(i!=n-1) cout<<" + ";
//     sum += max_value;
// }

// if (n > 1) {
//     cout << " = ";
// }
// cout << sum;
