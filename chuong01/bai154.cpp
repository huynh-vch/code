#include <iostream>
using namespace std;

#include <math.h>

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int at = n, ahh = n;
    cout << ahh;
    while (ahh != 1)
    {
        if (ahh % 2 == 0)
        {
            ahh = ahh / 2;
        }
        else
            ahh = 3 * ahh + 1;
        cout << ahh;
        at = ahh;
    }
}