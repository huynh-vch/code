#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;
struct tamgiac
{
    DIEM A;
    DIEM B;
    DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(DIEM &);
void Xuat(DIEM);
float Khoangcach(DIEM, DIEM);

void Nhap(TAMGIAC &);
void Xuat(TAMGIAC);
float Chuvi(TAMGIAC);
float Dientich(TAMGIAC);
DIEM Trongtam(TAMGIAC);

int main()
{
    TAMGIAC tg;
    Nhap(tg);
    cout << "\nTam giac vua nhap:";
    Xuat(tg);
    float dt = Dientich(tg);
    cout << "\nDien tich tam giac la:" << dt << endl;
    float cv = Chuvi(tg);
    cout << "\nChu vi tam giac la:" << cv << endl;

    DIEM G = Trongtam(tg);
    cout << "\nTrong tam tam giac la:";
    Xuat(G);
    cout << endl;
    system("pause");
    return 1;
}
void Nhap(DIEM &P)
{
    cout << "Nhap x:";
    cin >> P.x;
    cout << "Nhap y:";
    cin >> P.y;
}
void Xuat(DIEM P)
{
    cout << "\nToa do x:" << P.x;
    cout << "\nToa do y:" << P.y;
}
float Khoangcach(DIEM P, DIEM Q)
{
    return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

void Nhap(TAMGIAC &t)
{
    cout << "Nhap diem A:" << endl;
    Nhap(t.A);
    cout << "Nhap diem B:" << endl;
    Nhap(t.B);
    cout << "Nhap diem C:" << endl;
    Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
    cout << "\nToa do diem A:";
    Xuat(t.A);
    cout << "\nToa do diem B:";
    Xuat(t.B);
    cout << "\nToa do diem C:";
    Xuat(t.C);
}
float Chuvi(TAMGIAC x)
{
    float a = Khoangcach(x.B, x.C);
    float b = Khoangcach(x.C, x.A);
    float c = Khoangcach(x.A, x.B);
    return (a + b + c);
}
float Dientich(TAMGIAC x)
{
    float a = Khoangcach(x.B, x.C);
    float b = Khoangcach(x.C, x.A);
    float c = Khoangcach(x.A, x.B);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
DIEM Trongtam(TAMGIAC t)
{
    DIEM G;
    G.x = (t.A.x + t.B.x + t.C.x) / 3;
    G.y = (t.A.y + t.B.y + t.C.y) / 3;
    return G;
}