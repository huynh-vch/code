//De qui phi tuyen
#include <iostream>
using namespace std;
long TinhXn(int);

int main()
{
    int n;
    cout << "Nhap n:";
    cin >> n;
    int kq = TinhXn(n);
    cout << "Ket qua la: " << kq << "\n";
    return 1;
}

long TinhXn(int n)
{
    if (n == 0)
        return 1;
    long s = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        long xi = TinhXn(i);
        s = s + (n - i) * (n - i) * xi;
    }
    return s;
}
