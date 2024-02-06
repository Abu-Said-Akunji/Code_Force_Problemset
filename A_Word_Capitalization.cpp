#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    char arr[] = {",ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int num = str[0];
    if (num > 96)
    {
        int count = str[0] - 96;
        str[0] = arr[count];
        cout << str;
    }
    else
        cout << str;
    return 0;
}
