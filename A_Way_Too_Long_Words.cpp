#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    string s;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> s;
        int length = s.length();
        if (length <= 10)
        {
            cout << s;
        }
        else
        {
            char *arr = new char[length + 1];
            strcpy(arr, s.c_str());
            cout << arr[0] << length - 2 << arr[length - 1];
        }
        cout << "\n";
    }
}