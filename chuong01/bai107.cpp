#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x, r, S, T, M, i, dau, e;
    cout << "Nhap x:";
    cin >> x;
    r = (x * 3.14) / 180;
    S = 1;
    T = 1;
    M = 1;
    i = 2;
    e = 1;
    dau = -1;
    while (e >= pow(10, (-6)))
    {
        T = T * r * r;
        M = M * (i - 1) * i;
        e = T / M;
        S = S + (dau * e);
        i = i + 2;
        dau = -dau;
    }
    cout << "Tong la: " << S << endl;

    system("pause");
    return 1;
}