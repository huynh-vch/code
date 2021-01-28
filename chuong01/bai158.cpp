#include <iostream>
using namespace std;

#include <math.h>

int main()
{
    int n;
    cout << "Nhap vao so n = ";
    cin >> n;
    int t = n;
    int lc = t % 10;
    int dem = 0;
    int dv;
    while (t != 0)
    {
        dv = t % 10;
        if (lc < dv)
        {
            lc = dv;
        }
        t = t / 10;
    }
    int k = n;
    while (k != 0)
    {
        dv = k % 10;
        if (dv == lc)
        {
            dem += 1;
        }
        k = k / 10;
    }
    cout << "So luong chu so lon nhat cua so nguyen duong la:" << dem << endl;
}