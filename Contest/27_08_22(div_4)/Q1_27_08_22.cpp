#include <iostream>
using namespace std;

int main()
{
    int i, j, change, count = 0;
    char arr[4];
    for (i = 0; i < 4; i++)
        cin >> arr[i];

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = '0';
                count++;
            }
        }
    }
    cout <<3-count;
    return 0;
}