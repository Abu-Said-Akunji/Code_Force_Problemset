#include <bits/stdc++.h>
using namespace std;

int main()
{
    int output = 0, row = 0, col = 0;
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                if (i >= 2)
                    row = i - 2;
                else
                    row = 2 - i;
                if (j >= 2)
                    col = j - 2;
                else
                    col = 2 - j;
            }
        }
        cout << "\n";
    }
    output = row + col;
    cout << output;
}