#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, n, m;
    cin >> w;
    for (int i = 0; i < w; i++)
    {
        int r1, r2;
        cin >> n >> m;
        int loc[m][2];
        for (int i = 1; i <= m; i++)
        {
            cin >> loc[i][1] >> loc[i][2];
        }
        if ((n - m) > 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}