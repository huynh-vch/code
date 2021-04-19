#include "TestCandidate.h"
#include "Candidate.h"

void TestCandidate::NhapGiaTri()
{
	cout << "Nhap So Thi Sinh: ";
	cin >> SoThiSinh;
}

Candidate* TestCandidate::Nhap()
{
	Candidate* arr_ts;
	arr_ts = new Candidate[SoThiSinh];
	for (int i = 0; i < SoThiSinh; i++)
	{
		Candidate thi_sinh;
		cout << "Thi sinh thu " << i + 1 << endl;
		thi_sinh.Nhap();
		arr_ts[i] = thi_sinh;
	};
	return arr_ts;
}

void TestCandidate::ThucThi(Candidate* arr_ts)
{
	for (int i = 0; i < SoThiSinh; i++)
	{
		if (arr_ts[i].TongDiem() > 15)
		{
			arr_ts[i].Xuat();
		}
	}
}