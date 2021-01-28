//Bai 209. Dinh nghia ham de qui S(n) = 1^2 + 2^2 + 3^2 +...n^2 
#include <iostream>
using namespace std;
int Tong(int);

int main()
{
    int k;
    cout << "Nhap n:";
    cin >> k;
    int kq = Tong(k);
    cout << "Tong la:" << kq << "\n";
    return 1;
}

int Tong(int k)
{
    if (k == 0)
        return 0;
    return (Tong(k - 1) + k * k); //n^2
}