#include "SoPhuc.h"

void SoPhuc::Nhap()
{
	cout << "Nhap so thuc: ";
	cin >> SoThuc;
	cout << "Nhap so ao: ";
	cin >> SoAo;
}

void SoPhuc::Xuat()
{
	cout << "Phan thuc: " << SoThuc << endl;
	cout << "Phan ao: " << SoAo << endl;
}

SoPhuc SoPhuc::Tong(SoPhuc B)
{
	SoPhuc kq1;
	kq1.SoThuc = SoThuc + B.SoThuc;
	kq1.SoAo = SoAo + B.SoAo;
	return kq1;
}

SoPhuc SoPhuc::Tru(SoPhuc B)
{
	Sophuc kq2;
	kq2.SoThuc = SoThuc - B.SoThuc;
	kq2.SoAo = SoAo - B.SoAo;
	return kq2;
}

SoPhuc SoPhuc::Nhan(SoPhuc B)
{
	SoPhuc kq3;
	kq3.SoThuc = SoThuc * B.SoThuc - SoAo * B.SoAo;
	kq3.SoAo = SoThuc * B.SoAo + SoAo * B.SoThuc;
	return kq3;
}

SoPhuc SoPhuc::Tich(SoPhuc B)
{
	SoPhuc kq4;
	kq4.SoThuc = (SoThuc * B.SoThuc + SoAo * B.SoAo) / (B.SoThuc + B.SoAo) * (B.SoThuc + B.SoAo);
	kq4.SoAo = (B.SoThuc * SoAo - SoThuc * B.SoAo) / (B.SoThuc + B.SoAo) * (B.SoThuc + B.SoAo);
	return kq4;
}
