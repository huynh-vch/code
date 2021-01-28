#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "bai 113,tinh so hang thu n" << endl;
    cout << "nhap n: ";
    int n;
    cin >> n;
    double ahh;
    double at = 2;
    int i = 2;
    while (i <= n)
    {
        ahh = at + 2 * i + 1;
        i = i + 1;
        at = ahh;
    }
    cout << "so hang thu " << n << " cua day so la: " << ahh << endl;

    system("pause");
    return 1;
}