#include "SoPhuc.h"

int main()
{
	SoPhuc A, B;
	A.Nhap();
	B.Nhap();
	A.Xuat();
	B.Xuat();

	cout << "________________________" << endl;
	SoPhuc kq1;
	kq1 = A.Tong(B);
	cout << "--------Tong la--------" << endl;
	kq1.Xuat();

	SoPhuc kq2;
	kq2 = A.Tru(B);
	cout << "--------Tru la--------" << endl;
	kq2.Xuat();

	SoPhuc kq3;
	kq3 = A.Nhan(B);
	cout << "--------Nhan la--------" << endl;
	kq3.Xuat();

	SoPhuc kq4;
	kq4 = A.Tich(B);
	cout << "--------Tich la--------" << endl;
	kq4.Xuat();

	system("pause");
	return 1;
}