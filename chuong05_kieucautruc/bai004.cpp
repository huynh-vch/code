//Bai004
#include <iostream>
#include <cmath>
using namespace std;

struct phanso
{
    int tu;
    int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
int ktDuong(PHANSO);
PHANSO Tong(PHANSO, PHANSO);

int main()
{
    PHANSO A, B;
    cout << "Nhap phan so 1: ";
    Nhap(A);
    cout << "Nhap phan so 2: ";
    Nhap(B);
    cout << "Nhap phan so 1: ";
    Xuat(A);
    cout << "Nhap phan so 2: ";
    Xuat(B);

    if (ktDuong(A))
    {
        cout << "\nPhan so 1 duong.";
    }
    else
    {
        cout << "\nPhan so 1 kg duong.";
    }
    PHANSO kq = Tong(A, B);
    cout << "\nTong la: ";
    Xuat(kq);
    return 1;
}

void Nhap(PHANSO &x)
{
    cout << "\nNhap tu: ";
    cin >> x.tu;
    cout << "Nhap mau: ";
    cin >> x.mau;
}

void Xuat(PHANSO x)
{
    cout << "\nTu = " << x.tu;
    cout << "\nMau= " << x.mau;
}

int ktDuong(PHANSO x)
{
    if (x.tu * x.mau > 0)
        return 0;
}

PHANSO Tong(PHANSO x, PHANSO y)
{
    PHANSO temp;
    temp.tu = x.tu * y.mau + x.mau * y.tu;
    temp.mau = x.mau * y.mau;
    return temp;
}
