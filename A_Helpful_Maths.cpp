#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[100];
    int i, j = 0;
    string str;
    cin >> str;
    int k = str.length();
    for (i = 0; i < k; i++)
    {
        if (str[i] == '+')
        {
            continue;
        }
        else
        {
            num[j] = str[i];
            j++;
            // cout << num[j] << endl;
        }
        // cout << i << endl;
    }
    sort(num, num + j);
    for (i = 0; i < j; i++)
    {
        // cout << j<<endl;
        cout << num[i] - 48;
        if (i == j - 1)
            break;
        cout << "+";
    }
}