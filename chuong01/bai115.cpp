#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "bai 115,tinh so hang thu n" << endl;
    cout << "nhap n: ";
    int n;
    cin >> n;
    double ahh;
    double att = -1;
    ;
    double at = 3;
    int i = 2;
    while (i <= n)
    {
        ahh = 5 * at + 6 * att;
        i = i + 1;
        att = at;
        at = ahh;
    }
    cout << "so hang thu " << n << " cua day so la: " << ahh << endl;

    system("pause");
    return 1;
}