#include <iostream>
using namespace std;

int main()
{
    int h, w, f;
    cin >> h >> w;
    if (h * w % 2 == 0)
    {
        f = (w * h) / 2;
    }
    else
        f = ((w * h) - 1) / 2;
    cout << f << endl;
    return 0;
}