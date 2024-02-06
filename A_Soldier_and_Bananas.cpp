#include <bits/stdc++.h>
using namespace std;

int main()
{
    int price, has, count, borrow = 0, k = 0;
    int pay = 0;
    cin >> price >> has >> count;
    for (int i = 1; i <= count; i++)
    {
        k = k + i;
    }
    pay = k * price;
    borrow = pay - has;
    if (borrow >= 0)
    {
        cout << borrow;
    }
    else
        cout << "0";
}