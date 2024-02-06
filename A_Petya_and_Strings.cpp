#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c1 = 0, c2 = 0, c3 = 0;
    string s1, s2;
    int count1[100] = {0};
    int count2[100] = {0};
    cin >> s1;
    cin >> s2;
    int length = s1.length();
    for (int i = 0; i < length; i++)
    {
        if (1)
            // s1[i] = s1[i] - 'A' + 97;
            count1[s1[i]-'a']++;
        cout << count1[i]<<endl;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            // s2[i] = s2[i] - 'A' + 97;
            count2[i] = (s2[i] - 'a');
    }
    for (int i = 0; i < length; i++)
    {
        // cout << count1[i] << " " << count2[i] << endl;
        if (count1[i] > count2[i])
        {
            c3++;
        }
        if (count2[i] > count1[i])
        {
            c3--;
        }
    }
    // if (c3 > 0)
    //     cout << "1";
    // else if (c3 < 0)
    //     cout << "-1";
    // else if (c3 == 0)
    //     cout << "0";
}
