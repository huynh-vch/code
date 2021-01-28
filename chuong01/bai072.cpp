#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float s = 0;
    for (int i = 1; i <= n; i++)
    {
        int m = 0;
        for (int j = 1; j <= i; j++)
        {
            m = m + j;
        }
        s = s + (float)1 / m;
    }
    cout << "Xuat s: " << s;

    system("pause");
    return 1;
}