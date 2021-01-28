#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "bai 120,tinh so hang thu n" << endl;
    cout << "nhap n: ";
    int n;
    cin >> n;
    double ahh;
    double at = 2;
    int i = 2;
    while (i <= n)
    {
        ahh = 5 * at + sqrt(24 * at * at - 8);
        i++;
        at = ahh;
    }
    cout << "so hang thu " << n << " cua day so la: " << ahh << endl;

    system("pasuse");
    return 1;
}