#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int arr[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j];
        }
        if (arr[0] + arr[1] + arr[2] >= 2)
        {
            count++;
        }
    }
    cout << count;
}