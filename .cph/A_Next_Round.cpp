#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, count = 0;
    int num[100];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] >= num[k - 1] && num[k - 1] != 0)
            count++;
        else if (num[k - 1] == 0 && num[i] > num[k - 1])
            count++;
    }
    cout << count;
}