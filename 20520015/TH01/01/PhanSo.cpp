#include "PhanSo.h"

void PhanSo::Nhap()
{
	cout << "Hay nhap tu so va mau so:" << endl;
	cout << "Nhap TuSo: ";
	cin >> TuSo;
	cout << "Nhap MauSo: ";
	cin >> MauSo;
}

void PhanSo::Xuat()
{
	cout << "Tu So va Mau So da nhap:" << endl;
	cout << "Tu so la: " << TuSo << endl;
	cout << "Mau so la: " << MauSo << endl;
}

PhanSo PhanSo::Tong(PhanSo B)
{
	PhanSo kq1;
	kq1.TuSo = TuSo * B.MauSo + MauSo * B.TuSo;
	kq1.MauSo = B.MauSo * MauSo;

	return kq1;
}
PhanSo PhanSo::Tich(PhanSo B)
{
	PhanSo kq2;
	kq2.TuSo = TuSo * B.MauSo;
	kq2.MauSo = MauSo * B.MauSo;

	return kq2;
}
PhanSo PhanSo::Tru(PhanSo B)
{
	PhanSo kq3;
	kq3.TuSo = TuSo * B.MauSo - MauSo * B.TuSo;
	kq3.MauSo = MauSo * B.MauSo;

	return kq3;
}
