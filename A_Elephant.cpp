#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pos, step = 0;
    cin >> pos;
    for (int i = 0; i < 1000000; i++)
    {
        if (pos < 5)
        {
            step += 1;
            break;
        }
        if (pos % 5 == 0)
        {
            step = pos / 5;
            break;
        }
        if (pos % 5 != 0)
        {
            step = pos / 5;
            pos = pos % 5;
        }
    }
    cout << step;
}