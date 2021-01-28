#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x;
    cout << "Nhap x: ";
    cin >> x;
    double r = (x * 3.14) / 180;
    double e = 1;
    double S = r;
    double T = r;
    int M = 1;
    int i = 3;
    int dau = -1;
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