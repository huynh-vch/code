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

void Nhap(DIEM &);
void Xuat(DIEM);
DIEM DoiXungGoc(DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
    DIEM A, B;
    cout << "Nhap toa do diem 1: ";
    Nhap(A);
    cout << "Nhap toa do diem 2: ";
    Nhap(B);
    cout << "\nToa do diem 1: ";
    Xuat(A);
    cout << "\nToa do diem 2: ";
    Xuat(B);

    DIEM C;
    C = DoiXungGoc(A);
    cout << "\nDiem doi xung A qua goc toa do: ";
    Xuat(C);

    float kq = KhoangCach(A, B);
    cout << setw(6);
    cout << setprecision(3);
    cout << "\nKhoang cach hai diem: " << kq;

    return 1;
}

void Nhap(DIEM &P)
{
    cout << "\nNhap x: ";
    cin >> P.x;
    cout << "\nNhap y:";
    cin >> P.y;
}

void Xuat(DIEM P)
{
    cout << setw(6);
    cout << setprecision(3);
    cout << "\nx = " << P.x;
    cout << "\ny = " << P.y;
}

DIEM DoiXungGoc(DIEM P)
{
    DIEM temp;
    temp.x = -P.x;
    temp.y = -P.y;

    return temp;
}

float KhoangCach(DIEM P, DIEM Q)
{
    return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}