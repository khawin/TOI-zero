#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 6; i += 2)
    {
        if (n - i >= 1)
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}

// int n;cin>>n;
// for(int i=0;i<n;i++)
//     cout<<"*";
// cout<<endl;
// if(n-2>=1)
//     for(int i=0;i<n-2;i++)
//     cout<<"*";
// cout<<endl;
// if(n-4>=1)
//     for(int i=0;i<n-4;i++)
//     cout<<"*";
// return 0;
