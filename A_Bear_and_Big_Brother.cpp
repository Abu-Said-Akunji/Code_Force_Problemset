#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lim, bob, i = 0;
    cin >> lim >> bob;
    for (i = 0; i < 10; i++)
    {
        if (lim > bob)
        {
            break;
        }
        else
        {
            lim = lim * 3;
            bob = bob * 2;
        }
    }
    cout << i;
}