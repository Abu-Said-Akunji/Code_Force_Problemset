#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t, n;
    cin >> t;
    for (long int i = 0; i < t; i++)
    {
        unsigned long int sum = 0;
        unsigned long int flag = 0;
        unsigned long int num[200000];
        unsigned long int pwr[200000];
        cin >> n;
        for (long int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        for (long int i = 0; i < n; i++)
        {
            cin >> pwr[i];
        }
        for (long int i = 0; i < n; i++)
        {
            sum += (num[i] + pwr[i]);
            if (pwr[i] > flag)
            {
                flag = pwr[i];
            }
        }
        unsigned long int result = (sum - flag);
        cout << result << endl;
    }
}