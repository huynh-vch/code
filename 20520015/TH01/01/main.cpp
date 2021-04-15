#include "PhanSo.h"

int main()
{
	PhanSo A, B;
	A.Nhap();
	B.Nhap();
	A.Xuat();
	B.Xuat();

	cout << "__________________________" << endl;
	PhanSo kq1;
	kq1 = A.Tong(B);
	cout << "---------Tong la---------" << endl;
	kq1.Xuat();

	PhanSo kq2;
	kq2 = A.Tich(B);
	cout << "---------Tich la---------" << endl;
	kq2.Xuat();

	PhanSo kq3;
	kq3 = A.Tru(B);
	cout << "---------Tru la---------" << endl;
	kq3.Xuat();

	system("pause");
	return 1;

}