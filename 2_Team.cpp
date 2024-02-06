#include <iostream>
using namespace std;

int main()
{
    int x, i, person_1, person_2, person_3;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        cin >> person_1 >> person_2 >> person_3;
        if (person_1 + person_2 + person_3 > 1)
            cout << "can be solved 1";
        else
            cout << "can not be solved 0";
    }
    return 0;
}