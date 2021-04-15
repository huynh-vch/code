#include "Candidate.h"

using namespace std;
void Candidate::Nhap()
{
	cout << "Nhap Ma Sinh Vien:" << endl;
	fflush(stdin);
	getline(cin, Msv);

	cin >> Msv >> HoTen >> NgaySinh >> DiemToan >> DiemVan >> DiemAnh;
}

float Candidate::TongDiem()
{
	return  DiemToan + DiemVan + DiemAnh;
}

void Candidate::Xuat()
{
	cout << Msv << " - " << HoTen << " - " << NgaySinh << " | " << DiemToan
		<< " | " << DiemVan << " | " << DiemAnh << endl;
}
void Candidate::Tren15()
{
	if (Candidate::TongDiem() > 15)
		Candidate::Xuat();
}
