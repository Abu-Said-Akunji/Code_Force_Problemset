#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;

    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }
    cout << count;
}
