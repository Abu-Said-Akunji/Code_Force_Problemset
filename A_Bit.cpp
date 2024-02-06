#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, X = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        if (arr[0] == '+' || arr[2] == '+')
        {
            X++;
        }
        else if (arr[0] == '-' || arr[2] == '-')
        {
            X--;
        }
    }
    cout << X;
}