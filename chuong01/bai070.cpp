#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        int t = 1;
        int z = (i + 1) * 2;
        for (int j = 0; j < z; j++)
        {
            t = t * x;
        }
        s = s + t;
    }
    cout << "Xuat s: " << s;

    system("pause");
    return 1;
}