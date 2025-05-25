#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char o;
    cin >> a >> o;

    int x = a / 10;
    int y = a % 10;
    int rev = y * 10 + x;

    cout << a << " " << o << " " << rev << " = ";
    if (o == '+')
        cout << a + rev;
    else if (o == '*')
        cout << a * rev;

    return 0;
}
/*
int a;cin>>a;
    char o;cin>>o;
    int n[2];
    n[0]=a/10;
    n[1]=a%10;
    if(o=='+'&&n[1]!=0)cout<<a<<" + "<<n[1]<<n[0]<<" = "<<((n[0]*10)+n[1])+((n[1]*10)+n[0]);
    if(o=='+'&&n[1]==0)cout<<a<<" + "<<n[0]<<" = "<<((n[0]*10)+n[1])+((n[1]*10)+n[0]);
    if(o=='*'&&n[1]!=0) cout<<a<<" * "<<n[1]<<n[0]<<" = "<<((n[0]*10)+n[1])*((n[1]*10)+n[0]);
    if(o=='*'&&n[1]==0) cout<<a<<" * "<<n[0]<<" = "<<((n[0]*10)+n[1])*((n[1]*10)+n[0]);
*/