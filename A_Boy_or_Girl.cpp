#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    unordered_set<char> temp;
    for (int i = 0; i < str.length(); i++)
    {
        temp.insert(str[i]);
    }
    int count = temp.size();
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}