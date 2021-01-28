#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    cout << "bai 117,tinh so hang thu n" << endl;
    cout << "nhap n: ";
    int n;
    cin >> n;
    double ahh;
    double att = -1;
    double at = 3;
    double T = 2;
    int i = 2;
    while (i <= n)
    {
        T = T * 2;
        ahh = 5 * T + 5 * att - at;
        i = i + 1;
        att = at;
        at = ahh;
    }
    cout << "so hang thu " << n << " cua day so la: " << ahh << endl;

    system("pause");
    return 1;
}