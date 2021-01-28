// Bai217. Dinh nghia ham dequi T(x,n) = x^n
#include <iostream>
using namespace std;
int Luythua(float, int);

int main()
{
    int k;
    cout << "Nhap k:";
    cin >> k;
    float x;
    cout << "Nhap x:";
    cin >> x;

    float kq = Luythua(x, k);
    cout << "Ket qua la:" << kq << "\n";
    return 1;
}

int Luythua(float x, int k)
{
    if (k == 0)
        return 1;
    return (Luythua(x, k - 1) * x);
}
