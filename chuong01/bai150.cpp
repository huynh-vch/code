#include <iostream>
using namespace std;

#include <math.h>

int main()
{
    int a, b;
    cout << "Nhap vao so a = ";
    cin >> a;
    cout << "Nhap vao so b = ";
    cin >> b;
    int m = abs(a);
    int n = abs(b);
    while (m * n != 0)
    {
        if (m > n)
        {
            m = m - n;
        }
        else
            n = n - m;
    }
    int bcln = (abs(a * b)) / (m + n);
    cout << "Boi chung lon nhat cua hai so nguyen duong la: " << bcln;
}