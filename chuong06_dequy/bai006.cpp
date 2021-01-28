// De qui ho tuong
#include <iostream>
using namespace std;
long TinhXn(int);
long TinhYn(int);

int main()
{
    int k;
    cout << "Nhap k:";
    cin >> k;
    int kq1 = TinhXn(k);
    cout << "Ket qua la 1: " << kq1 << "\n";
    int kq2 = TinhYn(k);
    cout << "Ket qua la 2: " << kq2 << "\n";

    return 1;
}

long TinhXn(int n)
{
    if (n == 0)
        return 1;

    long a = TinhXn(n - 1);
    long b = TinhYn(n - 1);
    return (a + b);
}

long TinhYn(int n)
{
    if (n == 0)
        return 0;

    long a = TinhXn(n - 1);
    long b = TinhYn(n - 1);
    return (3 * a + 2 * b);
}