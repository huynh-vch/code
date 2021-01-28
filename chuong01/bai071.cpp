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
    for (int i = 0; i < n + 1; i++)
    {
        int t = 1;
        int z = (i * 2) + 1;
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