#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int upper = 0, lower = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            upper++;
        else if (str[i] >= 97 && str[i] <= 122)
            lower++;
    }

    if (lower >= upper)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    cout << str << endl;
}