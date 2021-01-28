//Bai730. Dinh nghia ham de qui tinhs S(n) = 1 + 2 + 3 + ... + n
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
    return (Tong(k - 1) + k);
}

// //cach 1
// int Tong(int n)
// {
//     if (n == 0)
//         return 0;
//     int s = Tong(n - 1);
//     return (s + n);
// }

// //cach 2
// int Tong(int n)
// {
//     if (n == 0)
//         return 0;
//     return (Tong(n - 1) + n);
// }