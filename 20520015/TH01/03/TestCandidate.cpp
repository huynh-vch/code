#include "TestCandidate.h"

void TestCandidate::Nhap()
{
	cout << "Nhap so thi sinh: ";
	cin >> SoThiSinh;
	thi_sinh = new Candidate[SoThiSinh];
	cin.ignore();
	for (int i = 0; i < SoThiSinh; i++)
	{
		cout << "Nhap thong tin thi sinh thu: " << i + 1;
		thi_sinh[i].Nhap();
		cin.ignore();
	}
}

void TestCandidate::XuLy()
{
	for (int i = 0; i < SoThiSinh; i++)
	{
		if (thi_sinh[i].TongDiem() > 15)
		{
			cout << "--\nThi sinh thu " << i + 1;
			thi_sinh[i].Xuat();
			cin.ignore();
			cout << "Tong diem: " << thi_sinh[i].TongDiem() << endl;
		}
	}
}
void TestCandidate::Xuat()
{
	for (int i = 0; i < SoThiSinh; i++)
	{
		cout << "Thi sinh thu " << i + 1;
		thi_sinh[i].Xuat();
		cin.ignore();
		cout << endl;
	}
}
