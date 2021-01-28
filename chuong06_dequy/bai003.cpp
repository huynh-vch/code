//Bai 216. Dinh nghia ham de qui tinh T(n) = 1.2.3...n
#include <iostream>
using namespace std;
int Giaithua(int);

int main()
{
    int k;
    cout << "Nhap n:";
    cin >> k;
    int kq = Giaithua(k);
    cout << "Tong la:" << kq << "\n";
    return 1;
}

int Giaithua(int n)
{
    if (n == 0)
        return 1;
    int T = Giaithua(n - 1);
    return (T * n);
}