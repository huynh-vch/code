#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        int t = 1;
        for (int j = 1; j <= i; j++)
        { // tinh !
            t = t * j;
        }
        s = s + t;
    }
    cout << "Xuat s: " << s;

    system("pause");
    return 1;
}