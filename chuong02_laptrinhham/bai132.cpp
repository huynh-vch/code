//bai132.cpp
#include <iostream>
using namespace std;

float Dientich(int, int, int, int, int, int);
void Dk(float, float, float, float);
void Nhap(int &, int &, int &, int &, int &, int &, int &, int &);

int main()
{
    int xa, ya, xb, yb, xc, yc, xm, ym;
    Nhap(xa, ya, xb, yb, xc, yc, xm, ym);

    float ABC = Dientich(xa, ya, xb, yb, xc, yc);
    float MAB = Dientich(xm, ym, xa, ya, xb, yb);
    float MBC = Dientich(xm, ym, xb, yb, xc, yc);
    float MCA = Dientich(xm, ym, xc, yc, xa, ya);

    Dk(ABC, MAB, MBC, MCA);
    return 1;
}

float Dientich(int x1, int y1, int x2, int y2, int x3, int y3)
{
    float ABC = ((float)1 / 2) * abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
    return ABC;
}

void Dk(float ABC, float MAB, float MBC, float MCA)
{
    if (ABC == MAB + MBC + MCA)
        cout << " M thuoc tam giac." << endl;
    else
        cout << " M ko thuoc tam giac." << endl;
}

void Nhap(int &xa, int &ya, int &xb, int &yb, int &xc, int &yc, int &xm, int &ym)
{
    cout << " Nhap xa= ";
    cin >> xa;

    cout << " Nhap ya= ";
    cin >> ya;

    cout << " Nhap xb= ";
    cin >> xb;

    cout << " Nhap yb= ";
    cin >> yb;

    cout << " Nhap xc= ";
    cin >> xc;

    cout << " Nhap yc= ";
    cin >> yc;

    cout << " Nhap xm= ";
    cin >> xm;

    cout << " Nhap ym= ";
    cin >> ym;
}