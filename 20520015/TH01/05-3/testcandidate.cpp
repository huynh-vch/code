#include "testcandidate.h"
#include "candidate.h"

void testcandidate::Nhap()
{
	cout << "Nhap so thi sinh: ";
	cin >> SoTS;
	DSTS = new candidate[SoTS];
	for (int i = 0; i < SoTS; i++)
		DSTS[i].Nhap();
}
void testcandidate::Kiemtra()
{
	int n;
	cout << "Nhap diem san: ";
	cin >> n;
	for (int i = 0; i < SoTS; i++)
		if (DSTS[i].Tongdiem() > n)
			DSTS[i].Xuat();
}