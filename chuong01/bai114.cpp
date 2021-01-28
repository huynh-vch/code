#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "bai 114,tinh so hang thu n" << endl;
    cout << "nhap n: ";
    int n;
    cin >> n;
    double ahh;
    double at = -2;
    int T = 3;
    int P = 7;
    int i = 2;
    while (i <= n)
    {
        T = T * 3;
        P = P * 7;
        ahh = 5 * at + 2 * T - 6 * P + 12;
        i = i + 1;
        at = ahh;
    }
    cout << "so hang thu " << n << " cua day so la: " << ahh << endl;

    system("pause");
    return 1;
}