#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char &c : s)
        c = toupper(c);

    int mxA = 0, cntA = 0, cntIT = 0, pos = 0;
    bool onlyIT = true, waitA = false, waitIT = false, ch = true;

    for (char c : s)
    {
        if (c != 'I' && c != 'T')
            onlyIT = false;

        if (waitIT && c != 'I' && c != 'T' && cntIT == 0)
        {
            ch = false;
            break;
        }

        if (waitA && c != 'A' && cntA == 0)
        {
            ch = false;
            break;
        }

        if (c == 'R')
        {
            waitA = true;
            cntA = 0;
        }
        else if (c == 'A')
        {
            if (!waitA)
            {
                ch = false;
                break;
            }
            cntA++;
            mxA = max(mxA, cntA);
        }
        else if (c == 'B')
        {
            waitIT = true;
            cntIT = 0;
        }
        else if ((c == 'I' || c == 'T') && waitIT)
        {
            cntIT++;
        }
        ++pos;
    }

    if (!ch || (waitA && cntA == 0) || (waitIT && cntIT == 0))
        cout << "no " << min(pos, (int)s.size() - 1) << '\n';
    else if (onlyIT)
        cout << "unknown " << s.size() << '\n';
    else
        cout << "yes " << mxA << '\n';

    return 0;
}
